@interface IMCTRCSUtilities : NSObject

+ (BOOL)IMCarrierRequiresFirstTimeOnAlert;
+ (BOOL)IMRCSEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (long long)IMRCSGroupMessagingMaxGroupSizeForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMRCSSupportedForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMCarrierRequiresFirstTimeOnAlertForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMRCSGroupMessagingEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMRCSGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;

- (id)init;

@end
