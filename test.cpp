medskip
eng{1}
Mark the correct/incorrect assertions about pointers.

+ A pointer denotes the location of a value in the memory.

+ When passing an array to a function, only the starting address is passed.

+ Pointer arithmetic means to add an integer offset to an array pointer.

- The value of a pointer must be an address in the heap memory.

- If \verb|p| and \verb|q| are pointers to integers, then \verb|p + q| is a correct expression.


\medskip
\eng{2}
We have the following variable definitions:
 \vspace{-3mm}\begin{verbatim}
int p = 2;
int* ptr1;
int* ptr2 = new int(1);
 \end{verbatim}\vspace{-6mm}
Mark the correct/incorrect assignment statements.

+ \verb|ptr1 = ptr2;|

- \verb|ptr1 = *ptr2;|

- \verb|ptr1 = *p;|

- \verb|ptr1 = p;|

+ \verb|ptr1 = NULL;|

- \verb|ptr1 = 20;|

- \verb|*ptr1 = ptr2;|

+ \verb|*ptr1 = *ptr2;|

- \verb|*ptr1 = *p;|

+ \verb|*ptr1 = p;|

- \verb|*ptr1 = NULL;|

+ \verb|*ptr1 = 20;|

+ \verb|p = *ptr2;|

- \verb|p = ptr2;|

+ \verb|p = 20;|

- \verb|*p = *ptr2;|

- \verb|*p = ptr2;|

- \verb|*p = NULL;|

- \verb|*p = 20;|


\medskip
\eng{3}
We have the following variable definitions:
 \vspace{-3mm}\begin{verbatim}
int a[3] = {1, 2, 3};
int* pa = a;
 \end{verbatim}\vspace{-6mm}
Mark with ``yes'' expressions which have value 3.

+ \verb|a[0] + a[1]|

+ \verb|a[0] + pa[1]|

+ \verb|(*pa) + a[1]|

+ \verb|(*pa) * 3|

+ \verb|*(pa + 2)|

- \verb|*pa + *a|

- \verb|pa[0] + a[0]|

- \verb|pa[1] + a[1]|

+ \verb|3*(*pa)|


\medskip
\eng{4}
Mark the correct/incorrect definitions and initializations
of character pointers and arrays.

+ \verb|char hello[] = "Hello";|

+ \verb|char* p = "pointer";|

+ \verb|char* year = "2014";|

+ \verb|char* heap = new char;|

+ \verb|char car[10] = "Volvo";|

+ \verb|char miles[] = "1000";|

+ \verb|char just[5] = "just";|

- \verb|char bye[7] = "bye-bye";|

- \verb|char one[1] = "1";|

- \verb|char* hit = -1;|

- \verb|char* oops = {0};|

- \verb|char hey[] = 1;|


\medskip
\eng{5}
We have the following classes:
 \vspace{-3mm}\begin{verbatim}
class Point {
... };
class Circle : public Point {
... };
 \end{verbatim}\vspace{-6mm}
Mark the correct/incorrect assertions about the classes
\verb|Point| and \verb|Circle|.

+ The class \verb|Point| is the base class and the class \verb|Circle| is the derived class.

- The class \verb|Circle| is the base class and the class \verb|Point| is the derived class.

+ The data members of the class \verb|Point| are present in each object of the class \verb|Circle|.

- The data members of the class \verb|Circle| are present in each object of the class \verb|Point|.

- The member functions of the class \verb|Circle| have access to any data member of the class \verb|Point|.

- The member functions of the class \verb|Point| have access to any data member of the class \verb|Circle|.

+ The member functions of the class \verb|Circle| have access to any public member function of the class \verb|Point|.


\medskip
\eng{6}
Suppose the class \verb|D| inherits from \verb|B|. Let
\verb|b| be an object of the class \verb|B|,
\verb|d| be an object of the class \verb|D|,
\verb|pb| be a pointer of the class \verb|B| and
\verb|pd| be a pointer of the class \verb|D|.
Which of the following assignments are legal?

+ \verb|b = d;|

- \verb|d = b;|

- \verb|pd = pb;|

+ \verb|pb = pd;|

+ \verb|*pb = *pd;|

- \verb|*pd = *pb;|

+ \verb|b = *pd;|

+ \verb|b = *pb;|

+ \verb|d = *pd;|

- \verb|d = *pb;|

+ \verb|*pd = b;|

+ \verb|*pb = b;|

+ \verb|*pd = d;|

- \verb|*pb = d;|


\medskip
\eng{7}
Mark the correct/incorrect assertions about inheritance
hierarchy of stream classes.

+ The \verb|fstream| class derives from \verb|iostream|.

- The \verb|fstream| class derives from \verb|ofstream|.

- The \verb|fstream| class derives from \verb|ifstream|.

+ The \verb|iostream| class derives from \verb|istream| and \verb|ostream|.

+ The \verb|ifstream| class derives from \verb|istream|.

+ The \verb|ostringstream| class derives from \verb|ostream|.

+ The \verb|istringstream| class derives from \verb|istream|.

- The \verb|iostream| class derives from \verb|ifstream| and \verb|ofstream|.

- The \verb|fstream| class derives from \verb|ifstream| and \verb|ofstream|.


\medskip
\eng{8}
Mark the correct/incorrect assertions about stream classes, objects and
member functions.

+ An object of \verb|istream| class is a source of bytes.

+ An object of \verb|ostream| class is a destination for bytes.

+ The \verb|get| member-function is defined for \verb|istream| objects.

+ The \verb|getline| member-function is defined for \verb|istream| objects.

+ The \verb|>>| operator is defined for \verb|istream| objects.

+ The \verb|<<| operator is defined for \verb|ostream| objects.

+ The object \verb|cin| belongs to a class that is derived from \verb|istream|.

- The object \verb|cin| belongs to a class that is derived from \verb|ifstream|.

+ The object \verb|cout| belongs to a class that is derived from \verb|ostream|.

- The object \verb|cout| belongs to a class that is derived from \verb|ofstream|.

- The \verb|open| member-function is defined for \verb|istream| objects.

+ The \verb|close| member-function is defined for \verb|fstream| objects.

- The object \verb|cin| belongs to the class \verb|iostream|.

- The object \verb|cout| belongs to the class \verb|iostream|.
