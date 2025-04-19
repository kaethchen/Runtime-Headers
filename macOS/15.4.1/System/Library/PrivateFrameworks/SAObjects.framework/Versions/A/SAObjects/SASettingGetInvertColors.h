@interface SASettingGetInvertColors : SASettingGetBool

+ (id)getInvertColors;
+ (id)getInvertColorsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
