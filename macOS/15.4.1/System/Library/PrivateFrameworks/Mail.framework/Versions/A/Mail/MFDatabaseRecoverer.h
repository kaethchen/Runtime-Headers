@class NSString, NSCondition;

@interface MFDatabaseRecoverer : NSObject {
    NSCondition *_analysisCondition;
}

@property (copy) NSString *path;
@property long long type;
@property long long analysisResult;
@property (readonly) BOOL fileLocked;
@property (readonly) BOOL aRemoteApplicationIsAccessingTheDatabase;
@property (readonly) BOOL lockFileFound;

+ (BOOL)moveDatabaseFromPath:(id)a0 toPath:(id)a1;
+ (id)moveDatabaseToUniquePath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)recover;
- (void)_analyzeBusyCondition;
- (void)_moveToOriginalPath:(id)a0;
- (id)_moveToUniquePath;
- (void)_removeLocks;
- (void)analyzeBusyCondition;
- (id)initWithPath:(id)a0 type:(long long)a1;
- (void)removeLockFile;

@end
