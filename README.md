# C_Plus_Plus_Intermediate_II
<h1 align="center"> Arrays</h1>
<h3>1.An Array is a group of logically related data items of same data types addressed by a common name .</h3>
<h3>2.All items in array stored in contiguous (physically adjacent) memory locations. </h3>
<h3>3.As array stored in contiguous(physically adjacent)memory location , we can traverse all the elements(data items) in single run , hence Arrays falls under 
<ins>Linear Data Structure</ins>. </h3>

```Syntax 
Syntax:<dataType> arrayName[<arraySize>]

Note: ArraySize is the total indexes that Array can have data items / elements stored. 
Each elements are accessed by their individual index values.</i>
`````
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_0.cpp">1.Simple Example On Array As Per Above Definition (Using List of Constants)</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_1.cpp">2. Simple Example On Array As Per Above Definition(User Input)</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_2.cpp">3. Accessing Each Elements Through Each Index Of An Array . </a> </strong></li>
</ul>
<h2>Types of arrays:</h2>
<ul>
<h2> 1. One Dimensional Array </h2>

```Syntax 
Syntax:<dataType> arrayName[<arraySize>→<Column Size/Row Size>]
`````
<h3>As One Dimensional Array is expandible either row wise or column wise as we can project according to its array size(i.e. Single Directional) , hence to be called as : "Vector". A One-Dimensional Array is the simplest form of an Array in which the elements are stored linearly and can be accessed individually by specifying the index value of each element stored in the array.  </h3>
<img src="https://user-images.githubusercontent.com/38869235/186314813-98da0217-08c2-4e48-8059-b02782fa350c.png">


<h3><ins>Examples based on One-Dimensional Array</ins></h3>
<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_3.cpp">1. Largest Element in an array</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_4.cpp">2. Sum Of Each Element in an array</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_5.cpp">3. Addition of two Row Matrices/Row Vectors and Column Matrices / Column Vectors</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_6.cpp">4. Multiplication of Row Vector x Column Vector [(1 x m) x (m x 1)] producing Singleton Matrix(Result)</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_7.cpp">5. Multiplication of Row Vector x Column Vector [(1 x m) x (m x 1)] producing Singleton Matrix(Result)-[Type 2]</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_8.cpp">6. Transpose of a Column Vector is Row Vector</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_9.cpp">7. Transpose of a Row Vector is Column Vector</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_10.cpp">8. Subtraction of two Row Matrices/Row Vectors and Column Matrices / Column Vectors</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_12.cpp">9. Insert An Element Into The Last Index Of An Array[With Explanation]</a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_13.cpp">10. Insert An element Into The First Index Of An Array[With Explanation] </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_14.cpp">11. Insert An Element Into Any Positional Index Of An Array[With Explanation] </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_15.cpp">12. Delete An Element From Last Index Of An Array </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_16.cpp">13. Delete An Element From First Index Of An Array[With Explanation] </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_17.cpp">14. Delete An Element From Any Postional Index Of An Array[With Explanation] </a> </strong></li>
</ul>
  <h2> 2. Two Dimensional Array </h2>
  
```Syntax 
  
<dataType> arrayName[<row size>][<column size>]
  
`````
<h3>Two Dimensional Array is structured in such a way that it takes first number of rows and then number of columns and store value accordingly in a physically adjacent memory location. It is also called as "Array of Arrays". One may depict it as table like in Relational Database or like Matrix format to perform some mathematical operations.</h3>
<img src="https://user-images.githubusercontent.com/38869235/186323357-b8a92707-3da3-443b-bc4d-c26ba71d5797.png" width=1000, height=350>
<h3><ins>Examples based on Two-Dimensional Array</ins></h3>
<ul>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_1.cpp">1. Representation of 2D Array(Using List of Constants)</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_2.cpp">2. Representation of 2D Array(User Input)</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_3.cpp">3. Representation of 2D Array in Matrix Format</a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_4.cpp">4. Addition of 2D Matrix </a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_5.cpp">5. Subtraction of 2D Matrix </a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_6.cpp">6. Multiplication of Column Vector x Row Vector [(m x 1) x (1x n)] producing m x n matrix</a> </strong></li>
  <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_7.cpp">7. Multiplication of two 2D Matrices [With Explanation ] </a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_8.cpp">8. Creation of Null Matrix (mxn) Format </a> </strong></li>
 <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_9.cpp">9. Assigning Signs (+/-)of Square Matrix in (mxn) Format </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_10.cpp">10. Calculation of Determinants of Sqaure Matrix (1x1 , 2x2 and 3x3) Matrix Using Sign(+/-) and Null Matrix. </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_11.cpp">11. Transpose of a 2D Matrix </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_12.cpp">12. Adjoint Matrix and Cofactor of 1x1 Matrix </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_13.cpp">13. Adjoint Matrix and Cofactor of 2x2 Matrix </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_14.cpp">14. Adjoint Matrix and Cofactor of 3x3 Matrix </a> </strong></li>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_15.cpp">15.Print out the last digit entered in a 3x3 matrix also Display the same in a Matrix format , through Traversal </a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_18.cpp">16.Program to find second largest element in an 3x3 array[With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_19.cpp">17.Program to find second smallest element in an 3x3 array[With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_22.cpp">18.Program for Upper Triangular Matrix of Square Matrix(m x n)[With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_23.cpp">19.Program for Lower Triangular Matrix of Square Matrix(m x n)[With Explanation]</a> </strong></li>



<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_24.cpp">20.Program Showing only Diagonal of a  Matrix(m x n)[With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_25.cpp">21.Check whether a Matrix (m x n) is Sparse / not [With Explanation]</a> </strong></li>
</ul>
<h2> 3. Multi Dimensional Array </h2>
<ul>
<li><h3>Known as 'N' - Dimensional.</h3></li>
<li><h3>Some times Multidimensional reffered as array with more than two Dimension.</h3></li>
<li><h3> In a matrix, the two dimensions are represented by rows and columns. </h3></li>
<li><h3> But 2 Dimensional is a simpliest form of Multidimensional Array → i.e. it means More than One Dimension i.e. 1-D is N-Dimensional. </h3></li>
<li><h3> In a 3-D array , It constitutes of size of rows , size of columns and no. of pages which hold these 2-D structures. </h3></li>

```Syntax 
  
3D array : <data_Type> <arrayName>[no. of pages][row size] [column size] 
  
`````
<img src="https://user-images.githubusercontent.com/38869235/187281319-3f3b8b9d-fe00-4574-947a-707d26440b3b.png" width=1000, height= 350>
<li><h3> And if we look into 'N' dimensional arrays then it constitues : </h3></li>

```Syntax 
  
N-D array : <data_type> <array_name>[size1][size2]....[sizeN];
  
`````

<h2>Example of Multi-Dimensional Array </h2>
<ul>
<li><h3> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ThreeDimensionalArray.cpp">Three Dimensional(3-D) Array (p x m x n)</a> </strong> </h3></li>
</ul>

</ul>
</ul>
<h1> SizeOf() Operator in Arrays </h1>
<h3> SizeOf() Operator in Arrays basically used to calculate size of an Array (in bytes) and Array's length i.e. number of Rows and Columns in a Matrix(Array). When it is sizeof(arr) → it becomes sizeof(int *) points to the array which have definite and adjacent rows and columns . When it is sizeof(arr_var[0]) → it becomes sizeof(int). For rows i.e. sizeof(arr_var[0]) it calculates  sizes of int(4) in columns and gives the result while only columns i.e sizeof(arr_var[0][0]), it calculates size of int(4) only in a single column i.e. constant 4 only and gives the result . For sizeof(arr) i.e. sizeof(int *) multiplies sizeof(int) i.e. 4 with number of rows and columns. While sizeof a pointer is always 8 bytes.   </h3>
  
```Syntax 
  
Size of Array : sizeof(arr_var)
Row Length : sizeof(arr_var) / sizeof(arr_var[0])
Column Length : sizeof(arr_var[0]) / sizeof(arr_var[0][0]);  
  
`````
  
<ul>
<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_11.cpp">1.Size and Length of an Array in One Dimensional Matrix [With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_20.cpp">2.Size and Length of an Array in (m xn) Square Matrix{1x1 , 2x2 , 3x3 etc....} [With Explanation]</a> </strong></li>

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_21.cpp">3.Size and Length of an Array in (m xn)  Matrix with Variable Rows and Columns {4x2, 4x3, 1x2 ....etc.} [With Explanation]</a> </strong></li>

</ul>

<h1> Action of Functions in Array </h1>
  
```Syntax 
  
One Dimensional
--------------------------
Function Declaration : <return_data_Type> functionName (<dataType1>[],<dataType2>[],......,<dataTypeN-1>[],<dataTypeN>[]);
Function Definition :<return_data_Type> functionName (<dataType> <arrayVarName1> [],<dataType> <arrayVarName2> [],......,<dataType> <arrayVarNameN-1>[],<dataType> <arrayVarNameN>[]);
Function Call:   functionName(<arrayVarName1>,<arrayVarName2>,.....,<arrayVarNameN-1>,<arrayVarNameN>);
  
 If any Array is returned from a function :
  
Return :  return <arrayVarName>[Size of Array];
  
  
`````
<ul>
<h2>Examples of Functions in 1-D Array</h2> 
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_1.cpp">1.Addition of Every Elements of 1-D Array(Using Function) [With Explanation]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_14.cpp">2.Largest Element in an 1-D Array(Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_15.cpp">3.Addition of Two 1-D Arrays[Square Matrix](Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_16.cpp">4.Subtraction of Two 1-D Arrays[Square Matrix](Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_17.cpp">5.Multiplication of Two 1-D Arrays[Square Matrix](Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_18.cpp">6. Second Largest Element in 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_19.cpp">7. Second Smallest Element in 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_20.cpp">8. Display The Last Element in 1-D Array Through Array Traversal Technique(Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_21.cpp">9. Insert An Element From Last Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_22.cpp">10. Insert An Element From First Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_23.cpp">11. Insert An Element From Any Positional Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_24.cpp">12. Delete An Element From Last Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_25.cpp">13. Delete An Element From First Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_26.cpp">14. Delete An Element From Any Positional Index In An 1-D Array(Using Function)[With Explanation] </a> </strong></li>
<h3><ins>EXTRAS</ins></h3>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_10.cpp">1.Checking 2 arrays(Square Matrix) have Unique and Distinct elements(Using Function) </a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_11.cpp">2.Union of 2 Distinct Arrays(Square Matrix)[i.e Intersection Elements are not Present] using Bubble Sorting [With Explanation](Using Function)</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_12.cpp">3.Union of 2 Arrays(Square Matrix)[When Arrays are not Distrinct i.e. Intersection Elements are Present] using Bubble Sorting [With Explanation](Using Function)</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_13.cpp">4.Intersection Between Two Arrays in a Sqaure Matrix (Using Function)</a> </strong></li>
</ul>
</ul>
<h3> <ins><i>Note</i></ins> : <i> Its not necessary that if swapping or any other functional action done inside function, we have to return array with its size i.e. array[size], We can also return its size only.</i></h3>
  
```Syntax
  
int swapping(int array[], int size){
 int pos1, pos2;
 cout << "Enter the position of the first element: ";
 cin >> pos1;
 cout << "Enter the position of the second element: ";
  cin >> pos2;
  int temp = array[pos1];
  array[pos1] = array[pos2];
  array[pos2] = temp;
  
  return a[size];                        
}

Not necessary we return a[size] :
                           
int swapping(int array[], int size){
 int pos1, pos2;
 cout << "Enter the position of the first element: ";
 cin >> pos1;
 cout << "Enter the position of the second element: ";
 cin >> pos2;
 int temp = array[pos1];
 array[pos1] = array[pos2];
 array[pos2] = temp;
  
  return size;                        
} 
  
Already Swapping Conducted under the body of the function;  
`````  
<h3>That is we can return anything but if swapping or assignment or any other functional actions is done with the array its already gets applied to the array under the body of function and we can get the swapped array if we dispaly it.</i></h3>
<br>
<br>

<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_27.cpp">Example of the above note.</a> </strong></li>
</ul>
  
<br>
<br>
  
```Syntax 
  
Two Dimensional
--------------------------
We have to declare the column size first:

(with define macro)

#define size value[value→Value are integers such as 1,2,3 , ....etc.]
  
Function Declaration : <return_data_Type> functionName (<dataType1>[][size/value],<dataType2>[][size/value],......,<dataTypeN-1>[][size/value],<dataTypeN>[][size/value]);
Function Definition :<return_data_Type> functionName (<dataType> <arrayVarName1> [][size/value],<dataType> <arrayVarName2> [][size/value],......,<dataType> <arrayVarNameN-1>[][size/value],<dataType> <arrayVarNameN>[][size/value]);
Function Call:   functionName(<arrayVarName1>,<arrayVarName2>,.....,<arrayVarNameN-1>,<arrayVarNameN>);
  
 If any Array is returned from a function :
  
Return :  return <arrayVarName>[Size of Row][size/value];

(with const (constant) modifier)

const int size = value; [value→Value are integers such as 1,2,3 , ....etc.]

Function Declaration : <return_data_Type> functionName (<dataType1>[][size/value],<dataType2>[][size/value],......,<dataTypeN-1>[][size/value],<dataTypeN>[][size/value]);
Function Definition :<return_data_Type> functionName (<dataType> <arrayVarName1> [][size/value],<dataType> <arrayVarName2> [][size/value],......,<dataType> <arrayVarNameN-1>[][size/value],<dataType> <arrayVarNameN>[][size/value]);
  
Function Call:   functionName(<arrayVarName1>,<arrayVarName2>,.....,<arrayVarNameN-1>,<arrayVarNameN>);
  
 If any Array is returned from a function :
  
Return :  return <arrayVarName>[Size of Row][size/value];
  
  
`````
<ul>
<h2>Examples of Functions in 2-D Array</h2> 
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_4.cpp">1. 2D Array Passing in Parameters of Function [With constant value by 'define' Macro at  Column Size]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_5.cpp">2. 2D Array Passing in Parameters of Function [With constant value by const Modifier at  Column Size]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_7.cpp">3. 2D Array Passing in Parameters of Function [With fixed Value in Column Size]</a> </strong></li>
</ul>
</ul>

```Syntax
  
Three Dimensional
--------------------------
We have to declare both the column size and row size first:

(with define macro)

#define size value[value→Value are integers such as 1,2,3 , ....etc.]
  
Function Declaration : <return_data_Type> functionName (<dataType1>[][size/value][size/value],<dataType2>[][size/value][size/value],......,<dataTypeN-1>[][size/value][size/value],<dataTypeN>[][size/value][size/value]);
Function Definition :<return_data_Type> functionName (<dataType> <arrayVarName1> [][size/value][size/value],<dataType> <arrayVarName2> [][size/value][size/value],......,<dataType> <arrayVarNameN-1>[][size/value][size/value],<dataType> <arrayVarNameN>[][size/value][size/value]);
Function Call:   functionName(<arrayVarName1>,<arrayVarName2>,.....,<arrayVarNameN-1>,<arrayVarNameN>);
  
 If any Array is returned from a function :
  
Return :  return <arrayVarName>[No. of Page][size/value][size/value];

(with const (constant) modifier)

const int size = value; [value→Value are integers such as 1,2,3 , ....etc.]

Function Declaration : <return_data_Type> functionName (<dataType1>[][size/value][size/value],<dataType2>[][size/value][size/value],......,<dataTypeN-1>[][size/value][size/value],<dataTypeN>[][size/value][size/value]);
Function Definition :  <return_data_Type> functionName (<dataType> <arrayVarName1> [][size/value][size/value],<dataType> <arrayVarName2> [][size/value][size/value],......,<dataType> <arrayVarNameN-1>[][size/value][size/value],<dataType> <arrayVarNameN>[][size/value][size/value]);
  
Function Call:   functionName(<arrayVarName1>,<arrayVarName2>,.....,<arrayVarNameN-1>,<arrayVarNameN>);
  
 If any Array is returned from a function :
  
Return :  return <arrayVarName>[No. of Page][size/value][size/value];
  
  
`````

<ul>
<h2>Examples of Functions in 3-D Array</h2> 
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_6.cpp">1. 3D Array Passing in Parameters of Function [With constant value by 'define' Macro at Row Size and  Column Size]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_8.cpp">2. 3D Array Passing in Parameters of Function [With constant value by const Modifier at  Row Size and  Column Size]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/func_array_9.cpp">3. 3D Array Passing in Parameters of Function [With fixed Value in Row Size and  Column Size]</a> </strong></li>
</ul>
</ul>

<h3> <ins><i>Note</i></ins> : <i> Though we make tables and represent Array as Row and Columns they are actuallly adjacent memory locations arranged one after the other as shown below:  </i></h3>

<ul>
<h3> <ins><i>1D- Array:</i></ins></h3>
<li><img src="https://user-images.githubusercontent.com/38869235/187766279-a5cddd11-fb07-4cab-85bf-ad5f9479f54c.jpg"  ></li>
</ul>

<ul>
<h3> <ins><i>2D- Array:</i></ins></h3>
<li><img src="https://user-images.githubusercontent.com/38869235/187767574-205c2a43-03c8-49c0-ae2e-7c5ead376ce6.png" width=700 height=300></li>
</ul>

<h3><i>Hence After passing 2-D and 3-D arrays in Function Parameter like : int arr[][] (2D)and int arr [] [] [](3D) , it can take 1st block of memory without its size mentioned but next adjacent blocks it asks user the size and the program cannot run without it . As it fail to refer the next adjacent chunk of memory without knowing its size. It is a disadvantage as we cannot use the next memory as user defined during runtime and we have to make everytime the size constant during compilation. The above problem  can be solved using pointers and pointer arithmetic. </i></h3>

<h1>NULL POINTER in Array</h1>
<h3>NULL is defined as Zero . Such as in character '\0' is Null character i.e. it is present at the end of array of character whose value is 0. </h3> 

```Syntax

int size=1 , *ptr;
size = size - 1; // i.e. 0 now
ptr = &size;
if(*ptr == NULL){
exit(0);
}

```
<h3> Similar example is presented below :</h3>

<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/NullPointer.cpp">1. NULL POINTER EXAMPLE</a> </strong></li>
<ul>
<h3><i> <ins> Note:</ins> The above will generate a warning i.e. NULL used in arithmetic . The warning can be removed by providing zero. </i></h3>

```Syntax

int size=1 , *ptr;
size = size - 1; // i.e. 0 now
ptr = &size;
if(*ptr == 0){
exit(0);
}

```
<h3><i> <ins>Or</ins></i></h3>

```Syntax

int size=1 , *ptr;
size = size - 1; // i.e. 0 now
ptr = &size;
if(ptr == NULL){
exit(0);
}

```
<h3><i> <ins> Hence:</ins> The warning occurs as NULL checks the address of pointer variable ptr is zero and whenever we try to return a value through reference of address it gives a warning as it want a address not a value . We can continue with the warning. </i></h3>
</ul>
</ul>
  
<h1>Recursive Array /Recursion Of Array </h1>
<ul>
<h2>Recursive 1D Array </h2>
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_1.cpp">1. Sum Of All Elements Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_2.cpp">2. Factorial Of All Elements Of An Array [Through Recursion of Array/Recursive Array][with Explanation]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_4.cpp">3. Matrix Multiplication of 1D array  [Through Recursion of Array/Recursive Array][with Explanation]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_5.cpp">4. Matrix Addition of 1D array  [Through Recursion of Array/Recursive Array][with Explanation]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_6.cpp">5. Matrix Subtraction of 1D array  [Through Recursion of Array/Recursive Array][with Explanation]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_7.cpp">6.Insert An Element Into The Last Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_8.cpp">7.Insert An element Into The First Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_9.cpp">8.Insert An Element Into Any Positional Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_10.cpp">9.Delete An Element From Last Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_11.cpp">10.Delete An Element From First Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_12.cpp">11.Delete An Element From Any Postional Index Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_13.cpp">12.Second Largest Element Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_14.cpp">13.Second Smallest Element Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_15.cpp">14.Largest Element Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_16.cpp">15.Smallest Element Of An Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/recur_17.cpp">16.Displaying 1D Array in Reverse Order [Through Recursion of Array/Recursive Array]</a> </strong></li>
</ul>
<h2>Recursive 2D Array </h2>
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur.cpp">1. Multiplication of 2D Arrays [Through Recursion of Array/Recursive Array][Explained in Details]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_1.cpp">2. Multiplication of Column Vector x Row Vector [(m x 1) x (1x n)] producing m x n matrix [Through Recursion of Array/Recursive Array][Explained in Details]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_2.cpp">3. Addition of 2D Matrix  [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_3.cpp">4. Subtraction of 2D Matrix  [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_4.cpp">5. Determinants upto 2x2 Square Matrix using Cofactors[Through Recursion of Array/Recursive Array][Explained in Details]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_5.cpp">6. Determinants of Any Square Matrix using Cofactors[Through Recursion of Array/Recursive Array][Explained in Details]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_6.cpp">7. Creation Of Null Matrix[Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_7.cpp">8. Assigning Signs (+/-)of Square Matrix in (mxn) Format[Through Recursion of Array/Recursive Array]</a> </strong></li>
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_8.cpp">9. Transpose of a 2D Matrix[Through Recursion of Array/Recursive Array]</a> </strong></li> 
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_9.cpp">10. Display All Cofactors Of A 2D Matrix[Through Recursion of Array/Recursive Array]</a> </strong></li> 
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_10.cpp">11. Adjoint Of Any Square 2D Matrix  [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_11.cpp">12.Inverse Of Any Square 2D Matrix  [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_12.cpp">13. Find 2nd Largest Number in 2D Array{With Explainatory Note} [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_13.cpp">14. Find 2nd Smallest Number in 2D Array{With Explainatory Note} [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_14.cpp">15. Find Smallest Number in 2D Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_15.cpp">16. Find Largest Number in 2D Array [Through Recursion of Array/Recursive Array]</a> </strong></li>
<br>
<li><strong> 17. <ins>Displaying Upper Triangular Matrix  [Through Recursion of Array/Recursive Array] </ins> </strong></li>
<ul>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_15_1.cpp">17.A. Displaying Upper Triangular Matrix [Arrangement of Recursion Logic Type 1 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_16.cpp">17.B. Displaying Upper Triangular Matrix [Arrangement of Recursion Logic Type 2 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_17.cpp">17.C. Displaying Upper Triangular Matrix [Arrangement of Recursion Logic Type 3 ]</a> </strong></li>
</ul>
 <br>
<li><strong> 18. <ins>Displaying Lower Triangular Matrix  [Through Recursion of Array/Recursive Array] </ins> </strong></li>
 <ul>
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_18.cpp">18.A. Displaying Lower Triangular Matrix   [Arrangement of Recursion Logic Type 1 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_19.cpp">18.B. Displaying Lower Triangular Matrix [Arrangement of Recursion Logic Type 2 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_20.cpp">18.C. Displaying Lower Triangular Matrix [Arrangement of Recursion Logic Type 3 ]</a> </strong></li>
</ul>
 <br>
<li><strong> 19. <ins>Displaying Diagonal of a 2D Square Matrix  [Through Recursion of Array/Recursive Array] </ins> </strong></li>
<ul>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_21.cpp">19.A. Displaying Diagonal of a 2D Square Matrix [Arrangement of Recursion Logic Type 1 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_22.cpp">19.B. Displaying Diagonal of a 2D Square Matrix [Arrangement of Recursion Logic Type 2 ]</a> </strong></li>
  <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_23.cpp">19.C. Displaying Diagonal of a 2D Square Matrix [Arrangement of Recursion Logic Type 3 ]</a> </strong></li>
</ul>
 <br>
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_24.cpp">20. Checking A Matrix Is Sparse Or Not [Through Recursion of Array/Recursive Array] </a> </strong></li>
 <li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/twodim_recur_25.cpp">21. Displaying 2D Matrix in Reverse Order [Through Recursion of Array/Recursive Array] </a> </strong></li>
</ul>
</ul>
<h3> <ins><i>Note</i></ins> : <i> Recursive call of a function starts from first initial starting point of function and ends till it reach the base case while in Loop , Loop starts from the starting condition of Loop and run till the condition ends(returns false by relational operators)  , hence inside Recursive function , we  focus only on condition rather assigning any other value inside the recursive function required for the desired output as when recursive function gets called , it again starts from first initial starting point of function, while in loop only loop block is focused which can run inside any function and we can assign any variable outside the loop block as per the condition to get the desired output. </i></h3>

```Syntax

Suppose:

int main(){
int a = 5;
func( a, 0);

}
int func(int a ,  int i) //Function's Initial starting point.
{
    int count = 0;

    //Base Condition

      if(i==a){
          return count;
        }
        
        //Relational Condition and Iteration
      if( i < a){
            count++;
            func(a, i+1);
       }
       
 }
 
 Note : The Result will be 0 only as function call starts from function's starting point.

```
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/example_1.cpp"> Example 1</a> </strong></li>

<h3>While in Loop:</h3>

```Syntax

Suppose:

int main(){
int a = 5;
func( a, 0);

}
int func(int a ,  int i) 
{
    int count = 0;

    for(i =0 ;i < a; i++) //Starting of Loop
    {
        count = count +1;  //body of the loop and the loop block
    }
     
     return count;
       
 }
 
 Note : The Result will be 5 as the Loop only run its block .

```
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/example_2.cpp"> Example 2</a> </strong></li>
<h3>This is the basic difference between loop and recursive function. </h3>

<h1> Pointers in Arrays </h1>
<ul>
<h3>A. Pointers to fetch Constant Values of Arrays.(Assigning Pointer to Array)</h3>
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray.cpp"> Accessing Constant Elements of 1D Array (Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_1.cpp"> Accessing Constant Elements of 2D Array (Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_2.cpp"> Accessing Constant Elements of 3D Array (Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<h3> <ins><i>Note:</i></ins> </h3>

```Syntax

For 1D Array :

    int a[5] = {1,2,3,4,5};
    int *p = a;
    
    Then:
    *p → Points to first index of an array. 
    *(p+0)→ Also points to first index of an array.
    *(p+1)→ Points to 2nd index of an Array.
    *(p+2)→ Points to 3rd index of an Array.
    ....etc.
  
For 2D Array :

    int a[2][2] = {{1, 2}, {3, 4}};
    int *p = (int *)a;;
    
    Then:
    *p → Points to first index of an array. 
    *(p+0)→ Also points to first index of an array.
    *(p+1)→ Points to 2nd index of an Array.
    *(p+2)→ Points to 3rd index of an Array.
    ....etc.

For 3D Array :

    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *p = (int *)a;
    
    Then:
    *p → Points to first index of an array. 
    *(p+0)→ Also points to first index of an array.
    *(p+1)→ Points to 2nd index of an Array.
    *(p+2)→ Points to 3rd index of an Array.
    ....etc.

 Hence this proves the memory which stores data value of Array are adjacent, 
 irrespective of their dimension change .
    
```

</ul>

<ul>
<h3>B. Pointers to fetch Constant Values of Arrays.(Without Assigning Pointer to Array)</h3>
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_3.cpp"> Accessing Constant Elements of 1D Array (Without Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_4.cpp"> Accessing Constant Elements of 2D Array (Without Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_5.cpp"> Accessing Constant Elements of 3D Array (Without Assigning Pointer to Array) [Through Pointers]</a> </strong></li>
<h3> <ins><i>Note:</i></ins> </h3>

```Syntax

For 1D Array :

    int a[5] = {1,2,3,4,5};
    
    Then:
    *a → Points to first index of an array. 
    *(a+0)→ Also points to first index of an array.
    *(a+1)→ Points to 2nd index of an Array.
    *(a+2)→ Points to 3rd index of an Array.
    ....etc.
  
For 2D Array :

    int a[2][2] = {{1, 2}, {3, 4}};
  
    Then:
     *(*a) → Points to first index of an array. 
    *(*(a + 0)+0))→ Also points to first index of an array.
    *(*(a + 0) + 1)→ Points to 2nd index of an Array.
    *(*(a + 1) + 0)→ Points to 3rd index of an Array.
    ....etc.

For 3D Array :

    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
 
    Then:
    *(*(*a)) → Points to first index of an array. 
    *(*(*(a + 0) + 0) + 0)→ Also points to first index of an array.
    *(*(*(a + 0) + 0) + 1)→ Points to 2nd index of an Array.
   *(*(*(a + 0) + 1) + 0)→ Points to 3rd index of an Array.
    ....etc.
    
```

</ul>
</ul>
<ul>
<h2>C. Iteration to fetch Constant Values of Arrays(<i>Here used for loop only same for other loops</i>).</h2>
<ul>
<h2>A. Assigning Pointer to Array</h2>
<ul>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_6.cpp"> Accessing Constant Elements of 1D Array (Assigning Pointer to Array Using For Loop) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_7.cpp"> Accessing Constant Elements of 2D Array (Assigning Pointer to Array Using For Loop) [Through Pointers]</a> </strong></li>
<li><strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/ptrToArray_8.cpp"> Accessing Constant Elements of 3D Array (Assigning Pointer to Array Using For Loop) [Through Pointers]</a> </strong></li>
<h3> <ins><i>Note:</i></ins> </h3>

```Syntax

For 1D Array :

    int a[5] = {1,2,3,4,5};
    int *p = a;
    
    Then:
    
   for(int i=0;i<5;i++){
       cout << *(p+i) << endl;
   }
   
   Note: Here we can write it as *(p+i*1) as columns in a row is single .
   
   We know ,Integer's address size is 4 bytes each (for 64 bits)
   _________________________________
   |1     | 2   | 3   | 4   | 5    |
   |3000  |3004 |3008 |3012 | 3016 |
   -----------------------------------
   So, p holdds the 1st address of the array i.e. arr[0][0] = 3000;
   
   Now, 
   
   When i = 0 : 
        *(p+0) = *(3000+0) = *(3000) = 1
        
   When i = 1 : 
        *(p+1) = *(3000+4 bytes) = *(3004) = 2
        
   When i = 2 :
        *(p+2) = *(3000+4 bytes + 4 bytes) = *(3008) = 3
        
    When i = 3 :
        *(p+3) = *(3000+4 bytes + 4 bytes + 4 bytes) = *(3012) = 4
        
    When i = 4 :
        *(p+4) = *(3000+4 bytes + 4 bytes + 4 bytes + 4 bytes) = *(3016) = 5
         
  → We are iterating between each address through 'i' variable.
  
For 2D Array :

    int a[2][2] = {{1, 2}, {3, 4}};
    int *p = (int *)a;
    Then:
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(p + i * 2 + j) << endl;
        }
    }
    
  Note: Here 2 refers to no. of columns in a row , i.e. Here 2 columns hence i*2 . 
  And j variable iterate between each addresses of columns. 
  
  So, if we consider i =0 and j =0  , p will point to : *(p+ 0*2 + 0  ) = *(p+ 0 + 0 ) i.e. arr[0][0].
  Similarly : *(p+ 0*2 + 1  ) = *( p+ 0 + 1 ), i.e. arr[0][1]
                *(p+ 1*2  + 0) = *( p+ 2 + 0 ) , i.e. arr[1][0]
                *(p + 1*2 + 1) = *( p+ 2 + 1 )  i.e.  arr[1][1]
    
More Specifically :(Integer , address size is 4 bytes each (for 64 bits) )
_______________
| 1   |   2  |
|3000 | 3004 |
--------------
|  3  |   4  |
|3008 | 3012 |   
______________

So, we know how Arithmetic addition occurs,
As : int *p = (int *) arr ; Where arr[2][2] = {{1, 2}, {3, 4}};
Which means p holds the 1st address of arr i.e. arr[0][0] = 3000
Hence if we makes its output : cout << *p << endl ; it will give us 1;
When *(p+0+0) => *(3000 + 0 + 0 )= *(3000) = arr[0][0] = 1
When *(p+0+1) => *(3000 + 0 + 1 )= *(3000 + 0 + 4 bytes) = *(3004) =>arr[0][1] = 2
When *(p+2+0) => *(3000 + 2 + 0 )= *(3000 + 4 bytes + 4 bytes+ 0) = *(3008) =>arr[1][0] = 3
When *(p+2+1) => *(3000 + 2 + 1 )= *(3000 + 4 bytes + 4 bytes + 4 bytes) = *(3012) =>arr[1][1] = 4

For 3D Array :

    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *p = (int *)a;
    
    Then:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << *(p + i * 4 + j * 2 + k) << endl;
            }
        }
    }
Here we can tell that 4 is rows * columns i.e. 2 * 2 i.e. Each page has 2 columns in each 2 rows , 
Hence i*rows*columns i.e. i*2*2 = i*4 (Here). Next we will access specific 2 columns in each rows , 
Hence j * columns (j*2 here). And to iterate between those addresses of columns we need 'k' . 

We can represent the same as :

Page : 1
_______________           
| 1   |   2  |
|3000 | 3004 |
--------------
|  3  |   4  |
|3008 | 3012 |   
______________

Page : 2
_______________
| 5   |   6  |
|3016 | 3020 |
--------------
|  7  |   8  |
|3024 | 3028 |   
______________

Then in Same Way : 
p holds the 1st address of arr i.e. arr[0][0][0] = 3000

*(p + 0*4 + 0*2 + 0) = *(p + 0 + 0 + 0) = *(3000 + 0 + 0 + 0) = *(3000)  = 1
*(p + 0*4 + 0*2 + 1) = *(p + 0 + 0 + 1) = *(3000 + 0 + 0 + 4) = *(3004)  = 2
*(p + 0*4 + 1*2 + 0) = *(p + 0 + 2 + 0) = *(3000 + 0 + 4 + 4 + 0) = *(3008)  = 3
*(p + 0*4 + 1*2 + 1) = *(p + 0 + 2 + 1) = *(3000 + 0 + 4 + 4 + 4 ) = *(3012)   = 4
*(p + 1*4 + 0*2 + 0) = *(p + 4 + 0 + 0) = *(3000 + 4 + 4 + 4 + 4 +0 + 0 ) = *(3016) = 5
*(p + 1*4 + 0*2 + 1) = *(p + 4 + 0 + 1)  = *(3000 + 4 + 4 + 4 + 4 +0 + 4 ) = *(3020)  = 6
*(p + 1*4 + 1*2 + 0) = *(p + 4 + 2 + 0)  = *(3000 + 4 + 4 + 4 + 4 +4 + 4 + 0 ) = *(3024) = 7
*(p + 1*4 + 1*2 + 1) = *(p + 4 + 2 + 1)  = *(3000 + 4 + 4 + 4 + 4 +4 + 4 + 4 ) = *(3028)  = 8

Therefore if we summarize for user input :

For 1D :

So if size = m (user input)

      for( int i = 0 ; i < m ; i++){
          cin >> /cout << *(p+i) << endl;
      }
      
For 2D :

if rows = m (user input) and columns = n (user input)

 for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> /cout <<  *(p + i * n + j) << endl;
        }
    }
    
 i.e. Pointer will point to each column of its corresponding row to take input 
 and generate its corresponding output .
    
    
For 3D:

if page = p (user input) ,rows = m (user input) and columns = n (user input)

for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
          for(int k =0 ; k < n ; k++)
          {
          cin >> /cout <<  *(p + i *m*n + j*n + k) << endl;
          
          }

        }
    }

    
```

</ul>
</ul>
</ul>

</ul>


