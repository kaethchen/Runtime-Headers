@class WFAppShortcutNamedQueryInfo, NSString, LNAutoShortcut, LNAutoShortcutLocalizedPhrase, NSArray, WFAutoShortcutEntityInfo, LNFullyQualifiedActionIdentifier;

@interface WFExecutableAppShortcut : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *attributionBundleIdentifier;
@property (readonly, nonatomic) LNAutoShortcut *underlyingAutoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, nonatomic) NSArray *alternatePhrases;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedIdentifier;
@property (readonly, nonatomic) WFAutoShortcutEntityInfo *entityInfo;
@property (readonly, nonatomic) unsigned long long chicletColor;
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *shortcutDescription;
@property (readonly, nonatomic) NSString *triggerPhrase;
@property (readonly, nonatomic) NSString *shortTitle;
@property (readonly, nonatomic) BOOL isDeprecatedStyle;
@property (readonly, nonatomic) NSString *base64ArchivedData;
@property (readonly, nonatomic) WFAppShortcutNamedQueryInfo *namedQueryInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 alternatePhrases:(id)a2 entityInfo:(id)a3;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 entityInfo:(id)a2;

@end
