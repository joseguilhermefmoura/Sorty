import React from 'react';
import './App.css';
import Navbar from './components/Navbar';
import { BrowserRouter as Router, Route, Switch } from 'react-router-dom';
import Home from './pages/Home';
import SelectionSort from './pages/SelectionSort';
import BubbleSort from './pages/BubbleSort';



function App() {
  return (
    <>
      <Router>
        <Navbar/>
        <Switch>
          <Route path="/" exact component={Home}/>
          <Route path="/selection-sort" exact component={SelectionSort}/>
          <Route path="/bubble-sort" exact component={BubbleSort}/>
        </Switch>
      </Router>
    </>
  );
}

export default App;
