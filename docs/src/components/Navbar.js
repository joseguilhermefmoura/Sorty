import React, {useState} from 'react'
import { Link } from 'react-router-dom'
import { SidebarData } from './SidebarData'
import './Navbar.css'

function Navbar() {
    const [sidebar, setSidebar] = useState(false);

    const showSidebar = () => setSidebar(!sidebar);

    return (
        <>
            <div className="navbar">
                <Link id="menu-bars">
                    <button onClick={showSidebar} className="btn">
                        <i class="fas fa-bars"></i>
                    </button>
                </Link>

                <div className="d-flex align-items-center" id="navbar-title">
                    <h3 className="mr-3">
                        Sorty
                    </h3>
                    <small><a href="">by: @joseguilhermefmoura</a></small>
                </div>
            </div>
            <nav className={sidebar ? 'nav-menu active' : 'nav-menu'}>
                <ul className='nav-menu-items p-0'>
                    <li className='navbar-toggle'>
                        <Link to="#" onClick={showSidebar}>
                            X
                        </Link>
                    </li>
                    {SidebarData.map((item, index) => {
                        return (
                        <li key={index} className={item.cName} onClick={showSidebar}>
                            <Link to={item.path}>
                                {item.icon}
                                <span>{item.title}</span>
                            </Link>
                        </li>
                        )
                    })}
                </ul>
            </nav>
        </>
    )
}

export default Navbar
