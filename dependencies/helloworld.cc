#include <mpi.h>
#include <iostream>

#ifdef USE_FMT
#include <fmt/core.h>
#endif


int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 0) {
#ifdef USE_FMT
        fmt::print("Hello {} from rank 0 and fmt!\n", "world");
#else
        std::cout << "Hello World from rank 0!" << std::endl;
#endif
    }
    MPI_Finalize();
    return 0;
}
