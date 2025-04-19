@class ACAccount;

@interface AAAppleIDRepairController : NSObject <AAAppleIDRepairControllerProtocol_Internal, AAAppleIDRepairControllerProtocol>

@property (retain) ACAccount *primaryAccount;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_fetchRepairState;
- (void)_forceFetchUpdatedUserInformationWithCompletion:(id /* block */)a0;
- (BOOL)offline_primaryAppleIDNeedsRepair;
- (void)primaryAppleIDRepairNeedsRepairCompletion:(id /* block */)a0;

@end
