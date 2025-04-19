@class NSString, DDLogFileInfo, NSFileHandle, NSObject;
@protocol OS_dispatch_source, DDLogFileManager;

@interface DDFileLogger : DDAbstractLogger <DDLogger> {
    DDLogFileInfo *currentLogFileInfo;
    NSFileHandle *currentLogFileHandle;
    NSObject<OS_dispatch_source> *rollingTimer;
    unsigned long long maximumFileSize;
    double rollingFrequency;
    unsigned long long droppedMessageCount;
}

@property unsigned long long maximumFileSize;
@property double rollingFrequency;
@property (readonly, nonatomic) id<DDLogFileManager> logFileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (id)currentLogFileHandle;
- (id)currentLogFileInfo;
- (id)initWithLogFileManager:(id)a0;
- (id)loggerName;
- (void)maybeRollLogFileDueToAge;
- (void)maybeRollLogFileDueToSize;
- (void)rollLogFile;
- (void)rollLogFileNow;
- (void)scheduleTimerToRollLogFileDueToAge;
- (void)willRemoveLogger;

@end
