@interface SASettingGetAppearance : SASettingGetValue

+ (id)getAppearance;
+ (id)getAppearanceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
