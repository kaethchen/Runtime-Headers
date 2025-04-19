@class NSString;

@interface CHUISMutableControlInstanceConfiguration : CHUISControlInstanceConfiguration

@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) unsigned long long preferredColorScheme;
@property (nonatomic, copy) NSString *launchOrigin;

- (id)copyWithZone:(void *)a0;
- (id)init;

@end
