# Cesium Map GUI

This GUI application leverages Cesium's Ion platform to render interactive 3D map data in your web view. To fetch map tiles and terrain data, you need a valid Cesium Ion Access Token.

## Acquiring a Cesium Ion Access Token

1. **Sign up or log in** to your Cesium Ion account.
    
2. Navigate to the [Access Tokens](https://cesium.com/learn/ion/cesium-ion-access-tokens/) page.
    
3. **Create a new token** or copy an existing one.
    

## Configuring Your Environment

Add your token to your bashrc:

```bash
# Open bashrc in your editor
sudo nano ~/.bashrc

# Add the following line (replace <your_token> with your actual token)
export CESIUM_TOKEN=<your_token>

# Save, exit, and reload the file
source ~/.bashrc
```

## Verifying Your Token

Run the following command to confirm:

```bash
echo $CESIUM_TOKEN
```

You should see your token printed to the console.