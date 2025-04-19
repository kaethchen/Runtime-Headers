@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isCancelled;
- (void)teardown;
- (void)quit;
- (void)setup;
- (id)temporaryDirectoryPath;

@end
