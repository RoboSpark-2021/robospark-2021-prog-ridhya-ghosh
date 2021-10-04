import logo from './logo.svg';
import './App.css';
import Heading from './components/Heading';
import Username from './components/Username';
import Password from './components/Password';
import ForgetQuestion from './components/ForgetQuestion';
import LoginButton from './components/LoginButton.js';

function App() {
  return (
    <>
      <div id="box">
      <center><Heading></Heading></center>
      <br /><br />
      <Username></Username>
      <br /><br /><br />
      <Password></Password>
      <br /><br /><br />
      <ForgetQuestion></ForgetQuestion>
      <br /><br />
      <LoginButton></LoginButton>
    </div>
    </>
  );
}

export default App;