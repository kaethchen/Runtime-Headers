@interface HDADSPInterface : HDAInterface {
    BOOL mInput;
}

- (void)dealloc;
- (id)init:(BOOL)a0;
- (id)initWithService:(int)a0;
- (id)initPrivate:(struct __CFString { } *)a0;
- (int)getParameter:(unsigned int)a0 :(unsigned long long)a1 :(unsigned long long *)a2;
- (int)findFunctionNumber:(BOOL)a0 name:(const char *)a1 number:(unsigned int *)a2;
- (int)setParameter:(unsigned int)a0 :(unsigned long long)a1 :(unsigned long long)a2;
- (int)bypass:(unsigned int)a0 :(BOOL)a1;
- (int)getCoefficients:(unsigned int)a0 :(void *)a1 :(void *)a2;
- (int)getCoefficientsWithIndex:(unsigned int)a0 :(unsigned int)a1 :(void *)a2 :(void *)a3;
- (int)getFunctionName:(unsigned long long)a0 :(void *)a1 :(void *)a2;
- (int)getNumInputChannels:(unsigned long long *)a0;
- (int)getNumOutputChannels:(unsigned long long *)a0;
- (int)getNumParameters:(unsigned int)a0 :(unsigned long long *)a1;
- (int)getNumberOfInstantiatedFunctions:(unsigned long long *)a0;
- (int)getOutputMute:(unsigned long long *)a0 Ch2:(unsigned long long *)a1 Ch3:(unsigned long long *)a2 Ch4:(unsigned long long *)a3 Ch5:(unsigned long long *)a4 Ch6:(unsigned long long *)a5;
- (int)setOutputMute:(BOOL)a0 Ch2:(BOOL)a1 Ch3:(BOOL)a2 Ch4:(BOOL)a3 Ch5:(BOOL)a4 Ch6:(BOOL)a5;
- (int)setupLineInDSPForMeasurement:(BOOL)a0 verbose:(BOOL)a1;
- (int)setupLineOutDSPForMeasurement:(BOOL)a0 verbose:(BOOL)a1;
- (int)setupMicrophoneDSPForMeasurement:(BOOL)a0 verbose:(BOOL)a1;
- (int)setupSpeakerDSPForMeasurement:(BOOL)a0 bypass_nonlinear:(BOOL)a1 verbose:(BOOL)a2;

@end
