@class NSString, NSDictionary;

@interface WCAUserSettings : NSObject {
    NSDictionary *_userSettings;
}

@property (copy) NSString *userName;

- (void)dealloc;
- (id)_userSettingsForUser:(id)a0;
- (id)contentFilterOverriddenSites;
- (id)initWithUserName:(id)a0;
- (BOOL)overridesAllowed;
- (int)websiteRestrictionType;
- (id)whiteListAllowedSites;

@end
