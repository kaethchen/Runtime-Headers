@class MFEWSAccount;

@interface _MFEWSAutodiscoveryTimerTarget : NSObject

@property (weak, nonatomic) MFEWSAccount *account;

- (void).cxx_destruct;
- (void)kickOffReautodiscovery:(id)a0;

@end
