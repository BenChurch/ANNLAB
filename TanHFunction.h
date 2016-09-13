#ifndef TANHFUNCTION_H
#define TANHFUNCTION_H


class TanHFunction : public NodeActivationFunction
{
    public:

        // Basic constructors
        //-----------------------------------------------
        // Constructor
        TanHFunction();

        // Destructor
        ~TanHFunction();

        // Copy constructor
        TanHFunction(const TanHFunction& OriginalTanH);

        // Copy assignment operator
        TanHFunction& operator= (const TanHFunction&);

        // Move constructor
        TanHFunction (TanHFunction&& OriginalTanH);

        // Move assignment operator
        TanHFunction& operator= (TanHFunction&);
        //-----------------------------------------------

        float GetFunctionOutput(double Input);

};

#endif // TANHFUNCTION_H
