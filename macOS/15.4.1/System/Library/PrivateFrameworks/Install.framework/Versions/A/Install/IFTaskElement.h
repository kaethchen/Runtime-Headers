@class NSString, NSTask, NSLock, IFPackageController;

@interface IFTaskElement : IFInstallQueueElement <IFTaskProgress> {
    NSTask *_myTask;
    BOOL _taskIsRunning;
    int _taskStatus;
    int _installKey;
    NSLock *_callbackLock;
    BOOL _writingFiles;
    id _stateDelegate;
    IFPackageController *_pkgController;
    NSString *_pkgTitle;
}

- (void)dealloc;
- (id)init;
- (long long)run;
- (void)setTask:(id)a0;
- (int)taskStatus;
- (void)setStateDelegate:(id)a0;
- (oneway void)noteFile:(bycopy id)a0 kilobytesCompleted:(unsigned int)a1;
- (oneway void)noteMessage:(in bycopy id)a0 percentCompleted:(in float)a1;
- (void)setPackageController:(id)a0;
- (void)setTaskEnvironment;
- (void)taskTerminatedWithStatus:(int)a0;

@end
