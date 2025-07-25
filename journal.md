<h1>July 18th</h1>
Today, I picked out parts and the mechanics as well as thought about the overall design. I made sure to allocate enough for decent laser goggles and an enclosure which I plan to be fully solid plastic with a small square cut out the top with a (1"x1") laser safe acrylic piece which you can check on the cutter through.

I spent a bit researching laser cutters, diode lasers, and movement systems which gave me a new perspective towards the machine.

After that, I started work on the CAD, finishing the y-axis. 

<img width="1616" height="1048" alt="CleanShot 2025-07-19 at 09 25 25@2x" src="https://github.com/user-attachments/assets/da1864d8-6666-43a1-9678-21a343df9903" />

I decided to go with a sturdier type of build because I want it to last a long time. I'll be using it to cut things like thin wood. It also has PWM control for the laser so engraving still is possible even with the sturdy leadscrew system. 

Total Time Spent: ~4 Hours

<h1>July 20th</h1>
I completely changed the entire perspective of this thing. I put way more focus on safety, with fire sensing, multiple ways to stop in case of an emergency, further research on optical safety, ventilation, filtering, and the movement system.
Yeah, I knew that belts were faster when initially designing, but I opted for leadscrews because I wanted it to be super durable. But I believe that belts (due to cheapness), are the better option so I will be switching my entire design.
I might go overbudget with all these features but with lasers you can never be too safe.

Total Time Spent: ~3 Hours

<h1>July 21st</h1>
Not gonna lie I spent a while researching belt movement systems because I did NOT really know how exactly they worked, whether the motor pressed against the belt to move or whether the belt itself moved, etc.

I'm almost done with the y-axis and it's feeling pretty solid so far. I also updated the BOM a lot and made some sketches and asked around for help checking (which took a lot of time)

<img width="1012" height="597" alt="CleanShot 2025-07-21 at 23 43 17" src="https://github.com/user-attachments/assets/44b81106-c330-4710-91f7-7230a4b31a87" />
my skeptical "diagram"




<img width="1171" height="532" alt="CleanShot 2025-07-21 at 23 41 27" src="https://github.com/user-attachments/assets/e68954d8-64c1-4ac2-a81e-50b161804c79" />

Total Time Spent: ~5 Hours


<h1>July 22nd</h1>

Insane work was put in today! I finished the entire core laser system, the belt tensioners confused me a bit but I got it done. I'm so proud of how clean this looks, and it looks like a great machine to have.
Tomorrow I'll be working on the smart safety system + more safety features such as ventilation and the enclosure. I also learned a lot more about laser goggles even though it's extremely hard to find information about it, I think not many people give advice on them. I added a bed as well because it would be pretty bad if my laser burned the desk.

<img width="891" height="658" alt="CleanShot 2025-07-23 at 08 35 32" src="https://github.com/user-attachments/assets/ab896715-f0ff-47ef-9e66-b95b980b6418" />

<img width="836" height="574" alt="CleanShot 2025-07-23 at 08 35 44" src="https://github.com/user-attachments/assets/0bc3f81a-6bdf-429f-91aa-2f7f05bf78e6" />

<img width="591" height="418" alt="CleanShot 2025-07-23 at 08 40 10" src="https://github.com/user-attachments/assets/40d52424-4bac-44c8-a413-9ecb9323d5cf" />
The belt clamping system, which confused me for some reason ^^


Overall today finished the movement system for both the x and y axes. I learned a lot actually, it's crazy how designing something can make me more experienced than doing something like a course.

Total Time Spent: ~12 Hours

<h1>July 23rd</h1>

I started today out by designing the enclosure out of extrusions. A little expensive, but the problem with most 5W diode laser cutters/engravers on the market is that they have zero safety features implemented. An enclosure + ventilation + proper safety glasses should be required for every cutter sold.

<img width="925" height="637" alt="CleanShot 2025-07-23 at 08 43 49" src="https://github.com/user-attachments/assets/74ac37dd-012d-4960-874e-7487a9c354de" />

After that, I added the brackets, supports, etc. The panels as well and the laser safe peephole (which is tiny due to cost and protection)

<img width="726" height="622" alt="CleanShot 2025-07-23 at 11 06 23" src="https://github.com/user-attachments/assets/c8a05891-4472-49d0-ad8f-eea02e56d3b7" />

<h4>THE ENCLOSURE IS NOT MADE OF GLASS</h4>

That would be very bad. It's made of a fire retardant aluminum type insulation which comes in rolls so the panels can be made cheaply. The glass material is used in Fusion 360 for visual purposes.


<img width="739" height="624" alt="CleanShot 2025-07-23 at 11 25 21" src="https://github.com/user-attachments/assets/1cd1198c-16d7-4fc1-b636-bde57b61d915" />

Quick render for fun

<img width="832" height="730" alt="CleanShot 2025-07-24 at 10 49 03" src="https://github.com/user-attachments/assets/e7f756b3-9083-4690-9f67-510d3a18d879" />

Added some holes but I need to design mounting brackets for the fan and the laser acrylic piece.

Total Time Spent: ~4 Hours


<h1>July 24th</h1>

<img width="869" height="553" alt="CleanShot 2025-07-24 at 11 53 34" src="https://github.com/user-attachments/assets/45389fa1-799f-444f-a861-c9d7b407b650" />

I designed the bracket for the fan with some holes for wires to travel into. Also an adapter for the 4 inch OD pipe, and a bracket mount for the tinyyy laser safe acrylic piece. 


Making the casing for the control/safety box.

<img width="923" height="587" alt="CleanShot 2025-07-24 at 14 06 48" src="https://github.com/user-attachments/assets/47b3063b-fb6c-446e-bd6d-08591c5641b2" />


<img width="1051" height="725" alt="CleanShot 2025-07-24 at 14 42 06" src="https://github.com/user-attachments/assets/0610652a-51c2-492c-a59d-9d907bb7acc4" />


Coming together...added a cooling fan because of the drivers and chips...2 microcontrollers + 3 drivers working at full power without any cooling is probably a bad idea, so yeah.


<img width="1037" height="732" alt="CleanShot 2025-07-24 at 14 56 46" src="https://github.com/user-attachments/assets/28386b35-fe4a-4bce-84f5-ac105a959309" />

The completed view of the inside, I'm pretty happy that it offers lots of safety features like alarms, fire detection, an e-stop, and just the ability to control the cutter from outside of the enclosure.




Finished! Just gotta polish it up a bit now.


<img width="717" height="500" alt="CleanShot 2025-07-24 at 15 13 43" src="https://github.com/user-attachments/assets/cb96bf78-189d-46c0-a667-d1d9a4efa5cc" />

Some pictures


<img width="1007" height="662" alt="CleanShot 2025-07-24 at 15 22 28" src="https://github.com/user-attachments/assets/242d836c-f539-4e19-a407-9c0bd57abe76" />

<img width="814" height="568" alt="CleanShot 2025-07-24 at 15 22 41" src="https://github.com/user-attachments/assets/79109fd7-0c2e-44dd-ab11-d095a3f05cf0" />

<img width="863" height="572" alt="CleanShot 2025-07-24 at 15 22 55" src="https://github.com/user-attachments/assets/eb4e81bf-de7a-4bea-b09f-3c0d29a0a40e" />

<img width="957" height="607" alt="CleanShot 2025-07-24 at 15 23 13" src="https://github.com/user-attachments/assets/264dcf5b-cb1d-4199-a2a4-14578d11e135" />


Polished up a bit, added panels for reference (even though i'm just gonna cut them out of that special roll)

<img width="1052" height="741" alt="CleanShot 2025-07-24 at 16 13 39" src="https://github.com/user-attachments/assets/77b0549a-e1cc-48e1-bf8a-5ba5bcb0cb1c" />


<img width="1241" height="777" alt="CleanShot 2025-07-24 at 23 14 38" src="https://github.com/user-attachments/assets/db12343b-b179-4f30-8894-509f67c07c44" />

I also started getting pictures in for the wiring diagram. I think i'll polish it all up tomorrow and submit. It's late right now.

Total Time Spent: 5 Hours




<h1>July 25th</h1>

Finished the wiring diagram!
<img width="928" height="731" alt="CleanShot 2025-07-25 at 12 43 37" src="https://github.com/user-attachments/assets/b05e4a21-b852-488e-814d-b863bac97892" />

