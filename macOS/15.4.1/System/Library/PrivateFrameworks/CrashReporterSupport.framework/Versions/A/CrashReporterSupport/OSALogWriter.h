@interface OSALogWriter : NSObject

+ (void)createSystemProblemReportDirectoryWithUID:(unsigned int)a0;
+ (void)createUserProblemReportDirectoryAtPath:(id)a0 uid:(unsigned int)a1;
+ (void)makeDirectoryAtPath:(id)a0 mode:(unsigned short)a1 uid:(unsigned int)a2 createHierarchy:(BOOL)a3;
+ (id)sharedObject;

- (id)fileNameForLogType:(id)a0 fileNamePrefix:(id)a1 additionalHeaders:(id)a2 attemptIndex:(unsigned long long)a3;
- (BOOL)hasXAttrAt:(const char *)a0 withName:(const char *)a1;
- (void)logSavedProblemReportForLogType:(id)a0 additionalHeaders:(id)a1 writingOptions:(id)a2 logLocation:(const char *)a3;
- (int)setXattrAt:(const char *)a0 key:(id)a1 value:(id)a2;
- (id)stringXAttrAt:(const char *)a0 withName:(const char *)a1;
- (void)throttleUnsubmittedProblemReportsAt:(id)a0 logType:(id)a1 appName:(id)a2;
- (BOOL)writeLogWithType:(id)a0 fileNamePrefix:(id)a1 additionalHeaders:(id)a2 writingOptions:(id)a3 writerBlock:(id /* block */)a4;

@end
