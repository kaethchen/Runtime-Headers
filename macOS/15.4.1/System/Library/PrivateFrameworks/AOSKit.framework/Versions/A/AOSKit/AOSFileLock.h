@class NSString;

@interface AOSFileLock : NSObject {
    int _fileDescriptor;
    NSString *_filePath;
    BOOL _isLocked;
}

- (void)dealloc;
- (void)unlock;
- (BOOL)isLocked;
- (id)initWithFilePath:(id)a0;
- (BOOL)lockWithExclusivity:(BOOL)a0 andMaxWait:(double)a1;
- (BOOL)_lockFileParentDirExists;

@end
