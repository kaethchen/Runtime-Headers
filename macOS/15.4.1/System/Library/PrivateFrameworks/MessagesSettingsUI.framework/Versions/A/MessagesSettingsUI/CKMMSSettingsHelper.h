@interface CKMMSSettingsHelper : NSObject

+ (BOOL)mmsDefaultEnabledForPhoneNumber:(id)a0 simID:(id)a1;

- (id)isMMSEnabled;
- (id)getMMSDictionary;
- (void)setMMSEnabled:(BOOL)a0;
- (id)willSendGroupMMS;

@end
