#Green Efficiency Analysis#

1-Measurement Methodology:

To complete this project, I measured the execution time of the provided C programs using the clock() function from the C standard library. All programs were compiled with the required GCC flags to make sure the compilation environment stayed the same for every test. I also ran every benchmark on the same machine to keep the results as fair as possible.

For the baseline program, I executed the program three times without changing the source code. The execution times were 0.265560 seconds, 0.265656 seconds, and 0.265210 seconds. The values were very close to each other, which shows that the program is deterministic, even though there are small timing differences between runs.

2-Observed Performance Differences:

The baseline program produced almost identical execution times in all three runs. The small differences of a few microseconds are expected because the operating system and background processes can slightly affect execution time.

The biggest performance difference appeared in the algorithm comparison task. The naive implementation had an average execution time of 7.472114 seconds, while the single-pass implementation had an average execution time of only 0.000326666 seconds. Based on these measurements, the naive algorithm was approximately 22,874 times slower than the single-pass algorithm. This shows how much algorithm choice can affect performance. Even though both implementations complete their intended work, the single-pass approach avoids repeating unnecessary operations and finishes much faster.

For the instrumentation experiment, the total execution time stayed around 0.0015 seconds across five runs. The build phase usually required about 0.0006 seconds, the processing phase about 0.00055 seconds, and the reduce phase between 0.00030 and 0.00040 seconds. These measurements show that the workload was divided fairly evenly, although the build and process phases generally consumed more time than the reduce phase.

3-Relation Between Runtime and Energy: 

This project did not measure real electrical power usage, but runtime can still be used as a good indicator of efficiency. A program that runs longer usually keeps the CPU busy for a longer period, which generally means it consumes more energy. The algorithm comparison clearly demonstrates this idea. Since the naive implementation needed much more time to finish than the single-pass implementation, it would also be expected to use more CPU resources. Choosing a better algorithm can therefore improve both performance and energy efficiency, especially when the same program is executed many times or on large systems.

4-Limitations of the Experiment:

This experiment has some limitations. First, it measures only execution time and not actual power consumption, so it cannot directly calculate energy usage. Second, the measurements were collected on only one computer, meaning different hardware could produce different timings. Finally, background processes running on the operating system may have caused the small differences observed between repeated executions.

5-Practical Engineering Takeaway:

This project showed me that measuring performance is more reliable than making assumptions. Running a program several times and comparing averages provides better evidence than relying on a single execution. I also learned that algorithm design has a much greater impact on performance than small code changes. The comparison between the naive and single-pass implementations clearly demonstrated how a more efficient algorithm can reduce execution time by a huge amount. Finally, adding simple instrumentation with clock() made it possible to understand where the program spent its time. These measurements help us make informed decisions and encourage us to write software that is both efficient and more sustainable.