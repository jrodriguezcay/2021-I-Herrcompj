#include <iostream>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Eigenvalues>

/*Este programa no corre aquí porque no tienen la libreria Eigen, pero corre en la maquina virutal o en su computadora si tienen Eigen */

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> Matriz;

void Matrixmaker();
void Matrixsolver(Matriz a, int size);

int main ()
{
  Matrixmaker();

return 0;
}

//Esta función crea matrizes con numeros al azar e itera auentando el tamaño de la matriz
void Matrixmaker ()
{
  int N=4;

  for (int ii=0; ii<10;ii++)
  {
    Matriz a=Eigen::MatrixXd::Random (N,N);

    Matrixsolver(a,N);

    N=2*N;
  }
}
//Esta función calculo el vector propio de la matriz creada en la función Matrixmaker
void Matrixsolver (Matriz a, int size)
{
  //En esta función es que se deben implementar los cronometros

  //Valores propios
  Eigen::VectorXcd av=a.eigenvalues();


  //Vectores propios
  Eigen::EigenSolver<Matriz> aV (a);


  std::cout<<aV.eigenvectors().col(0)<<std::endl;

}
