@class NSMutableArray, ATCRTAPHardwareID;

@interface AppleTypeCRetimerUARPUpdaterController : AppleTypeCRetimerUpdaterHelper <AppleTypeCRetimerUARPUpdaterInstanceDelegate> {
    NSMutableArray *_updaterInstances;
    BOOL _skipSameVersion;
    ATCRTAPHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) BOOL isDone;

- (void).cxx_destruct;
- (BOOL)performReset;
- (id)queryInfo;
- (BOOL)initDebugFlags:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(BOOL)a3;
- (BOOL)initializeUpdaterInstancesForcingPower:(BOOL)a0;
- (BOOL)performUpdateWithDictionary:(id)a0;

@end
