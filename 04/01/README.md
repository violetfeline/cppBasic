**Problem 1: Չվերթի վերջնակետ-քաղաք**

Գրել ծրագիր, որը մուտքում կստանա N չվերթների մասին տեղեկություն՝ յուրաքանչյուր չվերթի վերջնակետ-քաղաք և գնացքի համար, ապա M քաղաքի անվանում։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գնացքների համարները , որոնք մեկնում են տրված M քաղաքը։ Այդպիսիք չլինելուն դեպքում արտածել “Unreachable city!” հաղորդագրությունը։ (դաս 13)

Նկարագրել TRAIN անունով դաս, որն ունի հետևյալ դաշտերը.

չվերթի վերջնակետ-քաղաք
գնացքի համարը

**Examples**

Input
```
2
Yerevan K-154
Kapan J-100
Kapan
```
Output
```
J-100
```
Input
```
1
Gyumri I-596
Yerevan
```
Output
```
Unreachable city!
```
Input
```
3
Yerevan I-789
Yerevan J-159
Yerevan A-465
Yerevan
```
Output
```
I-789
J-159
A-465
```