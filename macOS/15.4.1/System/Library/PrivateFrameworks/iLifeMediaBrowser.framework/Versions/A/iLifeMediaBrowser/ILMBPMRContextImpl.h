@class NSString, NSMutableDictionary;

@interface ILMBPMRContextImpl : NSObject {
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (void)dealloc;
- (id)init;
- (void)setParameters:(id)a0;
- (id)applicationName;
- (id)logPath;
- (void)deleteInstruments;
- (void)getParametersFromApplication;
- (struct ILMBPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)instrument:(id)a0;

@end
