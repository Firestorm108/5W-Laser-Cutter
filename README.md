# 5W-Laser-Cutter
A 5-Watt diode laser engraver/cutter that can cut thin basswood, plywood, balsa, dark acrylic, leather, foamboard, and cardboard. It can engrave a huge amount of things, including most woods, soft metals, leathers, rubbers, and plastics.

It has many robust features, such as 0.9 stepper motors, laser head air assist, an opaque ventilated enclosure with a small laser-safe acrylic window, and a control box with lots of safety features!

I designed this due to many cheap diode laser cutters flooding the market, with no safety features. So I decided to design a laser cutter that had safety on many levels, including an enclosure, ventilation to a window (with filtration), an e-stop, automatic shutoff when a fire is detected, (loud) alarms, and cooling!


<h1>Laser Safety</h1>

** Make sure to ALWAYS buy laser goggles from a reputable brand and with properly rated specifications. **

** Lasers are extremely dangerous and you should never look at them directly and always wear proper safety goggles. **

** I am not responsible for any damage caused from irresponsibly using lasers. ** 

**General Tips for Working with Lasers:**

* The glasses that come with lasers are NOT safe, and will not protect your eyes.

* Lasers over 5mW require proper laser goggles, 5mW is still dangerous however the blink reflex protects you in most cases.

* Cutting with lasers releases fumes which need to be filtered or ventilated to a window, preferably both.

* An enclosure is the BARE minimum for safety along with properly rated laser goggles.

* Do LOTS of research before working with lasers. Diode lasers need to be treated very carefully especially.

<h3>With that done, let me show you the good stuff. (Disclaimer: The enclosure is NOT made of glass- that is purely for viewing purposes.) </h3>
<h1>Pictures!!!</h1>

![ezgif-4c86b1c415189d](https://github.com/user-attachments/assets/b17f71c8-67a3-43e4-ab5d-4dee82d3fa3d)
<img width="1520" height="740" alt="Assembly_2025-Jul-25_08-25-55PM-000_CustomizedView13541322892" src="https://github.com/user-attachments/assets/7de9abfc-6581-49a3-9070-497c744f1845" />
<img width="1520" height="740" alt="Assembly_2025-Jul-25_08-27-12PM-000_CustomizedView41064784376" src="https://github.com/user-attachments/assets/a6e6a7b8-2d32-45e5-b8ad-dcfcc743ce47" />
<img width="1520" height="740" alt="1ba0f0ed-b31c-47d2-8f72-23831fbd364b" src="https://github.com/user-attachments/assets/1b2d9cd7-b729-43f2-b519-b3faf09d92ff" />
<img width="1520" height="740" alt="Assembly_2025-Jul-25_08-39-19PM-000_CustomizedView32878857349" src="https://github.com/user-attachments/assets/73735050-3e60-4c6f-8bfa-9106daf06339" />

<h1>The Wiring Diagram</h1>
<img width="751" height="572" alt="image" src="https://github.com/user-attachments/assets/596fbc1d-8ad1-4af0-87fc-5b6218f75ce9" />

## Bill of Materials

| **Category**                            | **Item**                                                         | **Price** | **Link** |
|----------------------------------------|------------------------------------------------------------------|-----------|----------|
| **Power and Control**                  | 5W Laser                                                         | $90       | [Link](https://www.aliexpress.us/item/3256803120492638.html) |
|                                        | LaserGRBL Board + TMC2209s                                       | $20       | [Link](https://www.aliexpress.us/item/3256803342472175.html) |
|                                        | Nema 17 Stepper Motors (3)                                       | $11       | [Link](https://www.aliexpress.us/item/3256802068491329.html) |
|                                        | 12V 12A 144W Power Supply                                        | $30       | [Link](https://www.amazon.com/dp/B0BHWMP8H5) |
|                                        | Roller Level Limit Switches                                      | $4        | [Link](https://www.aliexpress.us/item/3256808529363805.html) |
| **Air Assist**                         | Tubing                                                           | $5        | [Link](https://www.amazon.com/dp/B08BRGM9T8/) |
|                                        | Air Pump                                                         | $6        | [Link](https://www.aliexpress.us/item/3256807353466989.html) |
| **Laser Safety**                       | Laser Goggles 190–540nm + 800–1700nm                             | $90       | [Link](https://phillips-safety.com/shop/laser/laser-safety-glasses/akp/akp-laser-safety-glasses-9388/) |
|                                        | Laser Protective Window                                          | $10       | [Link](https://phillips-safety.com/shop/laser/laser-safety-windows/acrylic-laser-window/near-vis-laser-protective-acrylic-sheet-orange/?attribute_thickness=0.250%22) |
|                                        | Shipping (Safety Items)                                          | $20       | –        |
| **Enclosure**                          | 500mm Extrusions (8)                                             | $44       | [Link](https://www.amazon.com/dp/B0DY7F1JKF) |
|                                        | L Connectors                                                     | $10       | [Link](https://www.amazon.com/dp/B0DS2SPN3Q/) |
|                                        | Fireproof Aluminum Insulation Roll                               | $17       | [Link](https://www.amazon.com/dp/B0CG1BZ5W6/) |
| **Ventilation, Safety, Alarms**        | E-Stop Button ("oh shit button")                                 | $2        | [Link](https://www.aliexpress.us/item/3256803351572300.html) |
|                                        | 6 Channel 5V Relay Module                                        | $4        | [Link](https://www.aliexpress.us/item/3256804675624982.html) |
|                                        | Temperature Probe                                                | $2        | [Link](https://www.aliexpress.us/item/3256807353480124.html) |
|                                        | Arduino Nano                                                     | $2        | [Link](https://www.aliexpress.us/item/3256807289041722.html) |
|                                        | 5V Buzzers                                                       | $2        | [Link](https://www.aliexpress.us/item/2255800643239740.html) |
|                                        | Ducting Exhaust                                                  | $7        | [Link](https://www.amazon.com/dp/B09LM4285L) |
|                                        | BLDC 12V Fan (12025)                                             | $8        | [Link](https://www.aliexpress.us/item/3256807400971120.html) |
|                                        | Activated Carbon                                                 | $0        | Already Owned |
|                                        | 12V to 5V Buck Converter                                         | $2        | [Link](https://www.aliexpress.us/item/3256806906184086.html) |
|                                        | Toggle Switches                                                  | $1        | [Link](https://www.aliexpress.us/item/2255800787248498.html) |
|                                        | 8010 Cooling Fan                                                 | $3        | [Link](https://www.aliexpress.us/item/3256806120222119.html) |
| **General Hardware**                   | 300mm 2020 Extrusions                                            | $23       | [Link](https://www.amazon.com/dp/B0C9QTZQ3T/) |
|                                        | Corner Brackets                                                  | $7        | [Link](https://www.aliexpress.us/item/3256808845200216.html) |
|                                        | M5 T-Nuts                                                        | $2        | [Link](https://www.aliexpress.us/item/2251832628044342.html) |
|                                        | 8mm M1.6 Screws                                                  | $2        | [Link](https://www.aliexpress.us/item/3256806983352954.html) |
|                                        | 12mm M5 Screws                                                   | $2        | [Link](https://www.aliexpress.us/item/3256806983352954.html) |
|                                        | 10mm M5 Screws                                                   | $2        | [Link](https://www.aliexpress.us/item/3256806983352954.html) |
|                                        | 50mm M5 Screw                                                    | $4        | [Link](https://www.aliexpress.us/item/3256808399236240.html) |
|                                        | M5 Nuts                                                          | $0        | Already Owned |
|                                        | 14mm M3 Screws                                                   | $2        | [Link](https://www.aliexpress.us/item/3256808399236240.html) |
|                                        | 35mm M5 Screw                                                    | $2        | [Link](https://www.aliexpress.us/item/3256805692722422.html) |
|                                        | 16mm M4 Screw                                                    | $2        | [Link](https://www.aliexpress.us/item/3256806983352954.html) |
|                                        | 16mm M3 Screw                                                    | $2        | [Link](https://www.aliexpress.us/item/3256806983352954.html) |
|                                        | 8mm x 300mm Linear Rods                                          | $7        | [Link](https://www.amazon.com/dp/B0BNLDZ6Y5) |
|                                        | LM8UU Bearings                                                   | $3        | [Link](https://www.aliexpress.us/item/3256806883965670.html) |
|                                        | 608 ZZ Bearings                                                  | $4        | [Link](https://www.aliexpress.us/item/3256804680880370.html) |
|                                        | 20TB5W6 Pulley (5)                                               | $5        | [Link](https://www.aliexpress.us/item/2251832595367020.html) |
|                                        | Silver 20T W6 B5 GT2 T (3)                                       | $5        | [Link](https://www.aliexpress.us/item/2251832631013486.html) |
|                                        | Belt Type A                                                      | $5        | [Link](https://www.aliexpress.us/item/3256801435743795.html) |
|                                        | 4x V Wheel Plate                                                 | $20       | [Link](https://www.amazon.com/dp/B0CHYS3G96/) |

---

### **Total Cost: $489**  
**_(A bit crazy, I know. Just the laser cutter itself would fit into the $350 budget, but adding all these safety features has skyrocketed the price, which is worth it.)_**

---
