@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface NSConcreteTask : NSTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
    id /* block */ _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    char _qos;
    _Atomic BOOL _isSpawnedProcessDisclaimed;
}

- (void)dealloc;
- (id)init;
- (id)arguments;
- (BOOL)resume;
- (void)setQualityOfService:(long long)a0;
- (void)setEnvironment:(id)a0;
- (id)environment;
- (int)processIdentifier;
- (void)setArguments:(id)a0;
- (int)_procid;
- (BOOL)suspend;
- (long long)_platformExitInformation;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (id)currentDirectoryPath;
- (void)interrupt;
- (BOOL)isRunning;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)launch;
- (BOOL)launchAndReturnError:(id *)a0;
- (id)launchPath;
- (id)launchRequirementData;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (id)preferredArchitectures;
- (long long)qualityOfService;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)setLaunchPath:(id)a0;
- (void)setLaunchRequirementData:(id)a0;
- (void)setPreferredArchitectures:(id)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (void)setStandardError:(id)a0;
- (void)setStandardInput:(id)a0;
- (void)setStandardOutput:(id)a0;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)setTaskDictionary:(id)a0;
- (void)setTerminationHandler:(id /* block */)a0;
- (id)standardError;
- (id)standardInput;
- (id)standardOutput;
- (long long)suspendCount;
- (id)taskDictionary;
- (void)terminate;
- (void)terminateTask;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;
- (void)waitUntilExit;

@end
