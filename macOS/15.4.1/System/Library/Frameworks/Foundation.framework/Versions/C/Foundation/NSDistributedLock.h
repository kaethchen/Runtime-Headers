@class NSLock, NSString, NSDate;

@interface NSDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)unlock;
- (BOOL)tryLock;
- (void)breakLock;
- (id)initWithPath:(id)a0;

@end
