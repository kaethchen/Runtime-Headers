@interface SASettingSetMidnightMode : SASettingSetBool

+ (id)setMidnightMode;
+ (id)setMidnightModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
