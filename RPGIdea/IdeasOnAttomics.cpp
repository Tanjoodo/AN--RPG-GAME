// THREADING IDEAS THAT I ENDED UP NOT DOING

/*nclude <iostream>       // std::cout
#include <thread>         // std::thread, std::this_thread::yield
#include <atomic>         // std::atomic

std::atomic<bool> ready(false);

void count1m(int id) {
	while (!ready) {             // wait until main() sets ready...
		std::this_thread::yield(); // keeps stoping the thread until main starts
	}
	for (volatile int i = 0; i<1000000; ++i) {} // does a loop to million and see which one thread is faster
	std::cout << id;  // prints the winner;
}

int main()
{
	std::thread threads[10];
	std::cout << "race of 10 threads that count to 1 million:\n";
	for (int i = 0; i<10; ++i) threads[i] = std::thread(count1m, i); // 
	ready = true;               // go!
	for (auto& th : threads) th.join();
	std::cout << '\n';

	return 0;
}/**/