@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCRecipeAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessCheckers:(id)a0;
- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;

@end
