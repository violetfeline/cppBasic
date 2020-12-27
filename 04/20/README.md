**Problem 20: Մաթեմատիկոս պոետը**

Պահանջվում է գրել ծրագիր, որում իրականցված են հետևյալ դասերը՝ Book, FictionBook, ScientificBook
* Book դասի օբյեկտները գրքեր են
* FictionBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գեղարվեստական գրքեր են
* ScientificBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գիտական գրքեր են

Դասերի դաշտեր.
* Book դասում պետք է լինեն հեղինակի անուն և ազգանուն դաշտերը
* FictionBook դասում պետք է լինի ժանր դաշտը՝ ՛novel՛, ՛story՛ և ՛poem՛ արժեքներից մեկով
* ScientificBook դասում պետք է լինի բնագավառ դաշտը՝ ՛informatics՛, ‘physics’, ‘mathematics’ և ‘chemistry’ արժեքներից մեկով

Ծրագիրը մուտքում պետք է ստանա N գեղարվեստական գրքերի տվյալները հերթականությամբ՝ հեղինակի անուն, ազգանուն և ժանր։ Ապա M գիտական գրքերի տվյալներ հերթականությամբ՝ հեղինակի անուն և բնագավառ։

Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն մաթեմատիկոսների անունները որոնք ունեն հրատարակված պոեմներ, եթե չկան այդպիսիք արտածի “Not found!”։ (դաս 15)

**Examples**

Input
```
2
Adam Araqelyan
story
Edgar Vardanyan
poem
3
Anahit Kirakosyan
chemistry
Edgar Vardanyan
mathematics
Gurgen Gevorgyan
mathematics
```

Output
```
Edgar Vardanyan
Input
2
Adam Araqelyan
story
Edgar Vardanyan
novel
3
Anahit Kirakosyan
chemistry
Edgar Vardanyan
mathematics
Gurgen Gevorgyan
mathematics
```

Output
```
Not found!
```

**Notes**
Բոլոր տեղանունների, անունների կամ նման տվյալների երկարությունը չի գերազանցում 40 սիմվոլը։
