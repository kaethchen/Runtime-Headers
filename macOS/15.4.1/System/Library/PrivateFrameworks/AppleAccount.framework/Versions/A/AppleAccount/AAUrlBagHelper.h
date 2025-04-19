@interface AAUrlBagHelper : NSObject

+ (BOOL)canRepairBeneficiary;
+ (BOOL)canRepairCustodian;
+ (BOOL)isLCInviteAcceptanceEnabled;
+ (long long)maxRepairCount;
+ (long long)maxRepairCountForBeneficiaries;

@end
