@class NSNumber, NSError;

@interface FamilyCircleUI.ScreenTimeConfiguration : NSObject <FamilyCircleUI.ScreenTimeConfigurationProtocol> {
    void /* unknown type, empty encoding */ stManagementState;
}

- (id)init;
- (void).cxx_destruct;
- (void)isContentPrivacyEnabledForDSID:(NSNumber *)a0 completionHandler:(void (^)(NSNumber *, NSError *))a1;
- (BOOL)isRestrictedForFeature:(id)a0;

@end
