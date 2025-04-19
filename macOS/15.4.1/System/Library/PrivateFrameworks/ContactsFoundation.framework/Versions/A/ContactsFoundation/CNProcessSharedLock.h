@class NSString;
@protocol CNFileServices, CNInhibitor, NSLocking;

@interface CNProcessSharedLock : NSObject <NSLocking> {
    id<NSLocking> _localLock;
    long long _localLockCount;
    int _fileDescriptor;
    id<CNFileServices> _fileServices;
}

@property (retain) id<CNInhibitor> runningBoardInhibitor;
@property (copy) NSString *name;
@property (readonly, copy) NSString *lockFilePath;

+ (id)os_log;
+ (id)recursiveSharedLockWithLockFilePath:(id)a0;
+ (id)semaphoreSharedLockWithLockFilePath:(id)a0;
+ (id)sharedLockWithLockFilePath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (BOOL)open:(id *)a0;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1;
- (BOOL)ensureFileDescriptorIsInvalid:(id /* block */)a0;
- (BOOL)ensureFileIsLocal:(id /* block */)a0;
- (id)errorUserInfo;
- (id)errorUserInfoWithDescription:(id)a0;
- (id)exceptionWithName:(id)a0 reason:(id)a1;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1 fileServices:(id)a2;
- (BOOL)isValidFileDescriptor;
- (void)lockRetryOnEDEADLK;
- (BOOL)openLockFile:(id /* block */)a0;

@end
