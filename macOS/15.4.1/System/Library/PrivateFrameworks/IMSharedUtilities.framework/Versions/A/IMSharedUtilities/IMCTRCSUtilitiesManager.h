@interface IMCTRCSUtilitiesManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)carrierRequiresFirstTimeOnAlert;
- (BOOL)carrierRequiresFirstTimeOnAlertForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)enabledByDefaultForContext:(id)a0;
- (BOOL)enabledForContext:(id)a0;
- (BOOL)enabledForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)groupMessagingEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (long long)groupMessagingMaxGroupSizeForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)groupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)isRBMEnabledForContext:(id)a0;
- (BOOL)isRBMSupportedForContext:(id)a0;
- (BOOL)networkSupportsInterworkingForContext:(id)a0;
- (BOOL)networkSupportsSpamReportingForContext:(id)a0;
- (id)privateIdentityForContext:(id)a0;
- (void)registerServiceCapabilityNotifications;
- (id)revokeIntervalForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)supportedForPhoneNumber:(id)a0 simID:(id)a1;

@end
