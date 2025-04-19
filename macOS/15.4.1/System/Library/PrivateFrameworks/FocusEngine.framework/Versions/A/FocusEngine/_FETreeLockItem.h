@class NSString, NSMutableArray;
@protocol _FEFocusEnvironment;

@interface _FETreeLockItem : NSObject {
    BOOL _didSoftAssert;
    BOOL _didCleanup;
    id<_FEFocusEnvironment> _unsafeEnvironment;
    id /* block */ _finalUnlockHandler;
}

@property (readonly, weak, nonatomic) id<_FEFocusEnvironment> environment;
@property (readonly, nonatomic) NSString *environmentDescription;
@property (readonly, nonatomic) unsigned long long lockCount;
@property (readonly, nonatomic) double lockTime;
@property (readonly, nonatomic) NSMutableArray *lockCallStackSymbols;
@property (readonly, nonatomic) NSMutableArray *unlockCallStackSymbols;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)lock;
- (BOOL)unlock;
- (void)validate;
- (void)_cleanup:(BOOL)a0;
- (id)initWithEnvironment:(id)a0 finalUnlockHandler:(id /* block */)a1;

@end
