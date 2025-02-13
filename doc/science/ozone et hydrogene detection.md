**This file should be split into multiples**

# Table of content

- [Table of content](#table-of-content)
- [General informations](#general-information)
  - [ozone](#ozone)
  - [hydrogen](#hydrogen)
  - [Design recommendations](#Design recommendations)
- [Sensor options](#sensor options)
  - [Ozone] (#Ozone)
  - [Hydrogen] (#Hydrogen)
- [Competition details and predictions](#Competition details and predictions)

# General information

This year's competition include the Boneyard Salvage assessment which requieres to investigate coolant lines. We will need to record radioactivity with the provided geiger counter and determin if there are any ozone and/or hydrogen leaks in the area. Therefore, we will need sensors to detect a change in ozone and hydrogen concentration compared to our baseline which will be uncontaminated air. Thus, a calibration will be needed before the task and a threshold needs to be established in advance.

## Ozone

Ozone is a dense gaz molecule. It is present in small quantities in the air (around 10-20 ppb) and will be present at less than 0.1 ppm (100ppb) in the competition's leak. Thus, we could put a threshold around 40-50ppb. It can be detected with an ozone sensor placed over the leak. We need a range of at least 20 ppb to 100ppb and a relatively good specificity to ozone.

ATTENTION
Ozone (O3) is highly reactive and oxydative so it would be prudent to be carefull around the electrical parts and avoid prolonged exposition or cover the parts that might react. Otherwise, it shouldn't interfere with the rover and there aren't any risks worth noting. People should know that ozone is an asphyxiant and breathing it in big quantities isn't safe. However, the concentrations present at the competition and for testing should be harmless.

## Hydrogen

Hydrogen is a light and quite volatil molecule. It is very present in the air in the form of H2 at 0.6 ppm. It becomes a safety risk around 15-20% since it becomes highly explosive. Thus, the treshold can be modified depending on the sensor and could be as low as 2 ppm without problem. The sensor should also be placed above the leak for optimal detection, but the range of detection should be bigger. We need to be carefull to be specific to H2 and not other molecules like H2S that contain hydrogen.

Hydrogen is relatively harmless. It becomes explosive in high concentration, but otherwise it shouldn cause problems for testing.

## Design recommendations

I recommend placing the sensors in a place where it can easily be placed above the leaks and equipments such as pipes. Puting it in a semi-enclosed box or space so that there is a ceiling, but no bottom could help retain the gases in close proximity to the sensor and favorise detection. In other words, air needs to flow in easily, but idealy should escape at a slower rate than it enters. Proximity to silicone or sealants should be avoided since it can break or desensitise the sensors.

# Sensor options

See the excel document for complete informations.

## Ozone

There are a few good options for this sensor. The sensitivity shouldn't be a problem. The difference is in the price and design more than anything. Any of the ones in green are good for me. 3V options are a lot more expensive so in my opinion not worth it, but I could try to find some with enough sensitivity (the one in the excel isn't sensitive enough for us). Cross-sensitivity is similar between sensor and we need to be carefull of NO2 to calibrate it to normal air level. It shouldn't be that bad, but it is worth noting.

I would recommend the MQ131 initially chosen since it's more sensitive and less expansive than the alternatives.

## Hydrogen

There sadly isn't one right option, nor a sensor that can detect for the entire possible range. Thus, we need to chose between higher sensitivity and overloading it sooner (it would pretty much garantee overloading it at the competition but would ensure detection. The risk of having a false positive from the air is higher though. If we choose a higher range, we get rid of this possibility for a false positive, but we might also miss really small concentration so it depends on how much we believe the leak concentrations are going to be. With a range from 100ppm to 10 000ppm we should be ok if the leak is significant, but I can't garantee detection for small leaks or if we can't get close to the leak. This might be cheaper, create less mistakes and is a reasonable range for small leaks detection so it would be a good option for a small gamble of the leak being significant enough to detect which is very far from the max they could do. A cheaper lower range is something we can probably find if that's what we want to go with. I did find a cheap option that goes from 0.1 ppm to 1000ppm which would be enough to detect the air baseline and do a calibration and more. It would also overload close to the leak. Thus, this 0.1 to 1000 ppm sensor would ensure detection no matter the quantities which would also be really good. Discussions on our strategies would be needed for this sensor since a perfect or universal solution doesn't exist for this type of sensor. If we want to detect everything the 0.1 to 1000 would be the better choice, if we want a more general sensor that wouldn't go off for ambiant air no matter what the 100 to 10 000 ppm would be good. In my opinion, both are enough for our analysis, but the choice will affect calibration and the board in itself so also how it is integrated in the rover.

In summary:
MQ8 is more detailled and safe since we have more information on it, it goes from 100 to 10 000ppm, there's no bad or important cross-sensitivity
SEN0572 doesn't have a datasheet (we only have some info on the website) and we have no information on cross-sensitivity, however it detects from 0.1 to 1000 ppm

#Competition details and predictions
I think the hydrogen will be in H2 form since it's one of the only harmless form of gasous hydrogen and it's a natural air component so they wouldn't be contaminating the air. Since the equipments to check are a various locations across the competition area and creating boxes adequate for every rove would be complicated, I think the leak will come from a place close to the ground or directly from an equipment at rover height. Thus, if the sensors are around the height of the electrical box, it should be fine. It being deplacable would definetely be a plus,, but it isn't that important either, I think we can manage with a permanently fixed box near the electrical box and a little outside the perimiter of the electrical box.

I would recommend placing the sensors away from the wheels since they move a lot of air and might throw particules at or near the sensors which might diminish sensitivity. It also ensures that even if the rover needs to move the gases would be more stable and concentrated near the sensors. Sure gases moving is innevitable, but limiting it would make detection easier so it could be nice to consider when designing.
