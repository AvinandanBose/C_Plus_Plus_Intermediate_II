# C_Plus_Plus_Intermediate_II
<h1>Arrays</h1>
<h3>1.An Array is a group of logically related data items of same data types addressed by a common name .</h3>
<h3>2.All items in array stored in contiguous (physically adjacent) memory locations. </h3>
<h3>3.As array stored in contiguous(physically adjacent)memory location , we can traverse all the elements(data items) in single run , hence Arrays falls under 
<ins>Linear Data Structure</ins>. </h3>

```Syntax: 
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

```Syntax: 
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
     <li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/arrays_10.cpp">8. Addition of two Row Matrices/Row Vectors and Column Matrices / Column Vectors</a> </strong></li>
</ul>
  <h2> 2. Two Dimensional Array </h2>
  
```Syntax: 
  
<dataType> arrayName[<row size>][<column size>]
  
`````
<h3>Two Dimensional Array is structured in such a way that it takes first number of rows and then number of columns and store value accordingly in a physically adjacent memory location. It is also called as "Array of Arrays". One may depict it as table like in Relational Database or like Matrix format to perform some mathematical operations.</h3>
<img src="https://user-images.githubusercontent.com/38869235/186323357-b8a92707-3da3-443b-bc4d-c26ba71d5797.png">
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

<li> <strong> <a href="https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_9.cpp">16.Program to find second largest element in an 3x3 array[With Explanation]</a> </strong></li>

</ul>

</ul>
