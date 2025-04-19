@class NSObject;
@protocol OS_os_log;

@interface MBLogManager : NSObject

@property (retain) NSObject<OS_os_log> *connObj;
@property BOOL legacyLoggingEnabled;
@property BOOL isInternalBuild;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)logType:(int)a0 inFunction:(const char *)a1 atLine:(int)a2 withString:(id)a3;
- (void)logFaultInFunction:(const char *)a0 atLine:(int)a1 withString:(id)a2;
- (void)logType:(int)a0 inFunction:(const char *)a1 atLine:(int)a2 withFormat:(id)a3;
- (id)safeErrorFromError:(id)a0;

@end
