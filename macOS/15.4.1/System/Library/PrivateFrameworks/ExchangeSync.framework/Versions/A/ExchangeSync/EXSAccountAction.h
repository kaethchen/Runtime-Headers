@class EXSAccount;

@interface EXSAccountAction : NSObject

@property (readonly, nonatomic) EXSAccount *account;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL delegateAccount;

+ (id)accountAction:(long long)a0 forAccount:(id)a1;
+ (id)accountAction:(long long)a0 forDelegateAccount:(id)a1;

- (void).cxx_destruct;
- (id)initWithChangeAction:(long long)a0 forAccount:(id)a1;
- (id)initWithChangeAction:(long long)a0 forDelegateAccount:(id)a1;

@end
