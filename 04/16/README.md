**Problem 16: Երկրաչափական մարմիններ**

Պահանջվում է գրել ծրագիր որում իրականցված են հետևյալ դասերը՝ Shape, Cube, Pyramid, Ball
* Shape դասը հանդիսանում է բազային աբստրակտ դաս մնացած դասերի համար և դրանից ժառանգված դասերի օբյեկտներն իրենցից ներկայացնում են երկրաչափական եռաչափ մարմիններ
* Cube դասի օբյեկտները խորանարդներ են
* Pyramid դասի օբյեկտներն քառակուսի բուրգեր են
* Ball դասի օբյեկտները գնդեր են

Դասերի մեթոդներ.
* Shape դասից ժառանգված բոլոր դասերը պետք է պարունակեն տվյալ դասի օբյեկտ ստեղծելու համար անհրաժեշտ կոնստրուկտոր(ներ) կամ մեթոդներ
* Մարմինների ծավալ հաշվող ֆունկցիա, որը Shape դասում պետք է սահմանված լինի որպես մաքուր վիրտուալ ֆունկցիան

Ծրագիրը մուտքում կստանա N մարմինների անունները և նրանց չափերը (բուրգի դեպքում նախ հիմք կողմի երկարությունը ապա բարձրությունը)։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր մարմինների ծավալների գումարը։ (դաս 15)

**Examples**

Input
```
1
Cube 6
```

Output
```
216
```

Input
```
3
Ball 3.2
Pyramid 3.6 4.56
Cube 4.5
```

Output
```
248.078
```

**Notes**

π = 3.1415

Բոլոր տեղանունների, անունների կամ նման տվյալների երկարությունը չի գերազանցում 40 սիմվոլը։