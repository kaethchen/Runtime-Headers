@interface SASettingGetBrightness : SASettingGetFloat

+ (id)getBrightness;
+ (id)getBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
