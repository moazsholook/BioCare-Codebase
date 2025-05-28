**Biocare App**

App dev environment (windows):
We are using react native with expo as the framework to allow easy ios and android prototyping. Visit the following sites to learn more about using and programming with react and expo. 
https://reactnative.dev/
https://expo.dev/

1. Download node version manager here (find and download the nvm-setup.exe): https://github.com/coreybutler/nvm-windows/releases.
2. Install expo in the command prompt by navigating to the app directory with "cd ...\BioCare-Codebase\Software\BioCARE-App" and use "npm install @expo/cli".
3. Create an expo account on their website, then login with "npx expo login".
4. Start the app in the BioCARE-App directory with "npx expo start --tunnel".
5. Download Expo Go on your mobile device and login.
6. Scan the qr-code generated in the command prompt with your mobile device. 

You should now have react-native and expo installed, as well as be able to run the app on your mobile device or on the web. Make sure your computer and mobile device are on the same network. Scan the qr-code generated from step 4 with your camera to automatically open the app. 


Updating node:
Node may need to be updated occasionally to avoid errors. This can be done by opening command prompt and entering "nvm install lts" then enter "nvm use lts".