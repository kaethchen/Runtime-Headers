@class NSOutputStream, NSString, NSTimer, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFileLogger : NSObject <WBSLogger> {
    NSURL *_directoryURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_logQueue;
    unsigned long long _maximumLogAgeInDays;
    NSDate *_logStartDate;
    NSTimer *_closeStreamTimer;
    NSString *_logName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)collectLogsInDirectory:(id)a0 withName:(id)a1 intoFile:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)tearDown;
- (void)logMessage:(id)a0;
- (void)_closeStream;
- (void)_logMessage:(id)a0 date:(id)a1;
- (void)_removeOldLogs;
- (id)initWithDirectoryURL:(id)a0 logName:(id)a1 maximumLogAge:(unsigned long long)a2;
- (void)logFormat:(id)a0;

@end
