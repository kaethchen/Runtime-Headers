@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (void)lock;
- (void)setName:(id)a0;
- (void)unlock;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;

@end
