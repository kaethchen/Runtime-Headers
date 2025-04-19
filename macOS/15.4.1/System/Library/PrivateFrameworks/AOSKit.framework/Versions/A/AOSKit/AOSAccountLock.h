@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    BOOL _isLocked;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)lock;
- (void)unlock;
- (id)initWithDSID:(id)a0;

@end
