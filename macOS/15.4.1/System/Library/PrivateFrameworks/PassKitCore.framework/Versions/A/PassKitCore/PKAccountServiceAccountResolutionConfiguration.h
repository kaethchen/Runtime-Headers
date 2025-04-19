@class NSDecimalNumber, PKCreditInstallmentPlan;
@protocol PKBusinessChatContext;

@interface PKAccountServiceAccountResolutionConfiguration : NSObject

@property (retain, nonatomic) PKCreditInstallmentPlan *earlyInstallmentPlan;
@property (retain, nonatomic) id<PKBusinessChatContext> businessChatContext;
@property (nonatomic) long long billPayAmountType;
@property (retain, nonatomic) NSDecimalNumber *billPayAmount;

- (id)description;
- (void).cxx_destruct;

@end
