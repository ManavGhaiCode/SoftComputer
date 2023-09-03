#include <vector>

namespace Gates {
    struct SimpleGate {
        bool input;
        bool output;

        virtual void run() = 0;
    };

    class Gate {
        public:
            bool input[2];
            bool output;

            virtual void run() = 0;
    };

    class DoubleGate {
        public:
            bool input[2];
            bool output[2];

            virtual void run() = 0;
    };

    class CustomGate {
        public:
            std::vector<bool> input;
            std::vector<bool> output;

            virtual void run() = 0; 
    };

    class notGate : public SimpleGate {
        public:
            void run() override {
                output = !input;
            }
    };

    class andGate : public Gate {
        public:
            void run() override {
                output = input[0] && input[1];
            }
    };
}