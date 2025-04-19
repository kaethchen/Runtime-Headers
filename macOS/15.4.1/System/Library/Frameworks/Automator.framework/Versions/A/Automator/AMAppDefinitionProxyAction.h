@class AMApplicationDefinition, NSString, NSImage, NSArray;

@interface AMAppDefinitionProxyAction : AMProxyAction

@property (retain, nonatomic) NSImage *smallIcon;
@property (retain, nonatomic) NSImage *largeIcon;
@property (retain, nonatomic) AMApplicationDefinition *applicationDefinition;
@property (retain, nonatomic) NSString *genericActionBundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSArray *replacementActions;

- (void).cxx_destruct;
- (id)icon;
- (void)setBundleVersion:(id)a0;
- (void)fault;
- (void)_setIsDeprecated:(BOOL)a0;
- (id)initWithGenericActionBundleIdentifier:(id)a0 applicationDefintiion:(id)a1;
- (void)setDeprecatedNumber:(id)a0;
- (void)setReplacementActions:(id)a0;

@end
