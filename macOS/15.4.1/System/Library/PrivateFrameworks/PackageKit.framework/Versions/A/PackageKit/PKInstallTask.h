@class NSString, NSTask, NSFileHandle, NSLock;

@interface PKInstallTask : NSObject {
    NSTask *_task;
    NSString *_logPrefix;
    NSFileHandle *_outputReadHandle;
    NSString *_partialLine;
    BOOL _logTaskOutput;
    NSLock *_logLock;
    unsigned long long _timeoutInSeconds;
}

@property BOOL logOnlyStandardError;

+ (id)taskWithLaunchPath:(id)a0 arguments:(id)a1 currentDirectoryPath:(id)a2 timeout:(unsigned long long)a3 logWithPrefix:(id)a4 qualityOfService:(unsigned int)a5;
+ (id)taskWithLaunchPath:(id)a0 arguments:(id)a1 currentDirectoryPath:(id)a2 timeout:(unsigned long long)a3 logWithPrefix:(id)a4 qualityOfService:(unsigned int)a5 environmentDictionary:(id)a6 withCambriaTranslation:(long long)a7;

- (void)dealloc;
- (int)run;
- (id)task;

@end
