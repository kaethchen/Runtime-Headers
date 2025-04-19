@class ILMBPMRContextImpl;

@interface ILMBPMRContext : NSObject {
    ILMBPMRContextImpl *impl;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)cleanupFromTerminate;
+ (void)registerForCleanup;

- (void)dealloc;
- (id)init;
- (void)setParameters:(id)a0;
- (id)applicationName;
- (id)logPath;
- (struct ILMBPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)cppInstrument:(id)a0;
- (void *)instrument:(id)a0;

@end
