@class NSArray;

@interface HDADSPUserClient : HDAUserClient {
    NSArray *_neverBypassModules;
    NSArray *_alwaysBypassModules;
    NSArray *_calibrationModules;
    NSArray *_compressorModules;
    NSArray *_linearModules;
    NSArray *_nonlinearModules;
}

+ (id)dspUserClientForDeviceType:(unsigned long long)a0;
+ (id)dspUserClientForExternalMicrophone;
+ (id)dspUserClientForHeadphones;
+ (id)dspUserClientForInternalMicrophone;
+ (id)dspUserClientForLineIn;
+ (id)dspUserClientForLineOut;
+ (id)dspUserClientForSPDIFIn;
+ (id)dspUserClientForSPDIFOut;
+ (id)dspUserClientForSpeakers;

- (void)dealloc;
- (int)UserClientScalarIScalarO:(unsigned int)a0 scalarICount:(unsigned int)a1 scalarOCount:(unsigned int)a2 scalarVargs:(void *)a3;
- (int)UserClientScalarIStructureO:(unsigned int)a0 scalarICount:(unsigned int)a1 structOSize:(unsigned long long *)a2 structO:(void *)a3 scalarVargs:(void *)a4;
- (id)currentDSPBypassStateWithError:(id *)a0;
- (BOOL)disableDSPBypass:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)enableDSPBypass:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)getFunction:(unsigned long long)a0 bypass:(BOOL *)a1 withError:(id *)a2;
- (BOOL)getFunction:(unsigned long long)a0 coefficients:(void *)a1 atIndex:(unsigned int)a2 ofSize:(unsigned long long *)a3 withError:(id *)a4;
- (BOOL)getFunction:(unsigned long long)a0 coefficients:(void *)a1 ofSize:(unsigned long long *)a2 withError:(id *)a3;
- (BOOL)getFunction:(unsigned long long)a0 name:(char *)a1 ofSize:(unsigned long long *)a2 withError:(id *)a3;
- (BOOL)getFunction:(unsigned long long)a0 numberOfParameter:(unsigned long long *)a1 withError:(id *)a2;
- (BOOL)getFunction:(unsigned long long)a0 parameter:(unsigned long long)a1 value:(unsigned long long *)a2 withError:(id *)a3;
- (BOOL)getNumberOfInstantiatedFunctions:(unsigned long long *)a0 withError:(id *)a1;
- (BOOL)getOutputMuteForChannel1:(BOOL *)a0 channel2:(BOOL *)a1 channel3:(BOOL *)a2 channel4:(BOOL *)a3 channel5:(BOOL *)a4 channel6:(BOOL *)a5 withError:(id *)a6;
- (id)initWithService:(unsigned int)a0 andClientType:(unsigned int)a1;
- (BOOL)restoreFromDSPBypassState:(id)a0 withError:(id *)a1;
- (BOOL)setFunction:(unsigned long long)a0 bypass:(BOOL)a1 withError:(id *)a2;
- (BOOL)setFunction:(unsigned long long)a0 parameter:(unsigned long long)a1 toValue:(unsigned long long)a2 withError:(id *)a3;
- (BOOL)setOutputMuteForChannel1:(BOOL)a0 channel2:(BOOL)a1 channel3:(BOOL)a2 channel4:(BOOL)a3 channel5:(BOOL)a4 channel6:(BOOL)a5 withError:(id *)a6;

@end
