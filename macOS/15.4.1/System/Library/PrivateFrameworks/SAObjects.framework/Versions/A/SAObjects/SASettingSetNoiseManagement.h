@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue

@property (copy, nonatomic) NSString *noiseManagementOption;

+ (id)setNoiseManagement;
+ (id)setNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
