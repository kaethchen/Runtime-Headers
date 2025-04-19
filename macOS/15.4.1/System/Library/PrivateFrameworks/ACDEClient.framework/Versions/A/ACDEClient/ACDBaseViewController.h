@class NSTextField, NSString, ACDStateManager, NSLayoutConstraint;

@interface ACDBaseViewController : NSViewController

@property (retain, nonatomic) NSLayoutConstraint *messageConstraint;
@property (nonatomic) double messageNonZeroConstrain;
@property (nonatomic) ACDStateManager *stateManager;
@property (copy, nonatomic) NSString *warningMessage;
@property (readonly, nonatomic) double messageZeroConstrain;
@property (nonatomic) BOOL isActivityInProgress;
@property (retain, nonatomic) NSTextField *messageView;

- (void)dealloc;
- (id)init;
- (void)awakeFromNib;
- (void)didBecomeActive;
- (void)didResignActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)handleFailoverWithCompletion:(id /* block */)a0;
- (void)setMessage:(id)a0 type:(unsigned long long)a1;

@end
