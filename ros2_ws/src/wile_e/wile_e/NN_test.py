import torch
from datetime import datetime

model = torch.jit.load('/home/bailey/ros2_ws/src/wile_e/wile_e/NN/policy.pt', map_location=torch.device('cpu'))
model.eval()

compiled_model = torch.compile(model)

#for name, param in compiled_model.named_parameters():
#    print(f"{name}: {param.shape}")

obs = torch.randn(1, 24)  # Replace with real observation
timer = datetime.now()
with torch.no_grad():
    action_logits = model(obs)
timer = datetime.now() - timer
print(f"{timer} | Action logits: {action_logits}")

timer = datetime.now()
with torch.no_grad():
    action_logits = compiled_model(obs)
timer = datetime.now() - timer
print(f"{timer} | Action logits (compiled model): {action_logits}")
