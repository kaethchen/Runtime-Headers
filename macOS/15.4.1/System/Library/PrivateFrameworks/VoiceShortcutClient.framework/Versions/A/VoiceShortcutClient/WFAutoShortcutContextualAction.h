@class NSArray, WFExecutableAppShortcut, NSString, LNAutoShortcut, LNAutoShortcutLocalizedPhrase, NSNumber;

@interface WFAutoShortcutContextualAction : WFContextualAction

@property (readonly, nonatomic) WFAutoShortcutContextualAction *parentAction;
@property (readonly, nonatomic) unsigned long long orderOfShortcut;
@property (readonly, nonatomic) NSNumber *cachedProminentDisplayEligibility;
@property (readonly, nonatomic) WFExecutableAppShortcut *executableAppShortcut;
@property (readonly, nonatomic) NSString *parameterlessIdentifier;
@property (readonly, nonatomic) LNAutoShortcut *autoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, copy, nonatomic) NSArray *alternativePhrases;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL isTopHitEligible;
@property (readonly, nonatomic) NSArray *searchKeywords;
@property (readonly, nonatomic, getter=isEligibleForProminentDisplay) BOOL eligibleForProminentDisplay;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;
+ (id)legacySpotlightDomainIdentifier;
+ (id)allActionsForAutoShortcut:(id)a0 bundleIdentifier:(id)a1 startIndex:(unsigned long long)a2;
+ (id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)creationDate;
- (unsigned long long)displayOrder;
- (id)initWithAutoShortcut:(id)a0 bundleIdentifier:(id)a1;
- (id)_staticDisplayStringForDecoding;
- (id)workflowRunKind;
- (id)actionBySettingEligibilityForProminentDisplay:(BOOL)a0;
- (id)actionForRunningFromSpotlight;
- (BOOL)availableFromLockedContext;
- (BOOL)definesDisplayOrder;
- (id)initWithAutoShortcut:(id)a0 identifier:(id)a1 parameterlessIdentifier:(id)a2 phrase:(id)a3 alternativePhrases:(id)a4 bundleIdentifier:(id)a5 actionIdentifier:(id)a6 orderOfShortcut:(unsigned long long)a7 parentAction:(id)a8 prominentDisplayEligibility:(id)a9 executableAppShortcut:(id)a10;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 alternativePhrases:(id)a2 bundleIdentifier:(id)a3;
- (id)initWithExecutableAppShortcut:(id)a0 index:(unsigned long long)a1;
- (id)relatedApp;
- (id)spotlightActionIdentifier;
- (id)spotlightItem;

@end
