@class LACFlags, _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList;

@interface LACConcurrentEvaluationHelper : NSObject

@property (class, readonly, nonatomic) LACConcurrentEvaluationHelper *sharedInstance;

@property (nonatomic, readonly) BOOL isConcurrentEvaluationAvailable;
@property (nonatomic, readonly) BOOL isConcurrentEvaluationEnabled;
@property (readonly, nonatomic) _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList *allowList;
@property (readonly, nonatomic) LACFlags *flags;

- (void).cxx_destruct;
- (BOOL)isConcurrentEvaluationEnabledForClientInfo:(id)a0;
- (id)initWithAllowList:(id)a0 flags:(id)a1;
- (BOOL)isClientAllowListedWithClientInfo:(id)a0;

@end
