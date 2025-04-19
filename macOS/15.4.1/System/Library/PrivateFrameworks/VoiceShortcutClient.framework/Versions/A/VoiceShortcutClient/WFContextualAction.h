@class NSDate, NSString, NSArray, NSData, WFContextualActionFilteringBehavior, CSSearchableItem, WFContextualActionIcon;

@interface WFContextualAction : NSObject <WFSpotlightResultRunnable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContextualAction *actionForRunningFromSpotlight;
@property (readonly, nonatomic) BOOL definesDisplayOrder;
@property (readonly, nonatomic) unsigned long long displayOrder;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CSSearchableItem *spotlightItem;
@property (readonly, nonatomic) NSString *spotlightActionIdentifier;
@property (readonly, nonatomic) BOOL availableFromLockedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL actionShowsUserInterface;
@property (readonly, copy, nonatomic) NSString *wfActionIdentifier;
@property (readonly, nonatomic) WFContextualActionFilteringBehavior *filteringBehavior;
@property (readonly, nonatomic) unsigned long long correspondingSystemActionType;
@property (readonly, nonatomic) BOOL showsUserInterfaceWhenRunning;
@property (readonly, nonatomic) BOOL outputsFiles;
@property (readonly, nonatomic, getter=isReversible) BOOL reversible;
@property (readonly, nonatomic) NSString *workflowRunKind;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *uniquePrivateIdentifier;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long resultFileOperation;
@property (readonly, nonatomic, getter=isAlternate) BOOL alternate;
@property (readonly, nonatomic) WFContextualActionIcon *icon;
@property (readonly, nonatomic) WFContextualActionIcon *accessoryIcon;
@property (readonly, copy, nonatomic) NSString *iconSymbolName;
@property (readonly, copy, nonatomic) NSData *iconImageData;
@property (readonly, nonatomic) double iconImageScale;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;

+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;
+ (id)systemActionWithType:(unsigned long long)a0 identifier:(id)a1 displayString:(id)a2 inputTypes:(id)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)settingBiomeStreamIdentifier;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)associatedSettingsPreference;
- (void)configureIfNeededForContext:(id)a0 completion:(id /* block */)a1;
- (id)contextForSurface:(unsigned long long)a0;
- (id)copyWithParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 wfActionIdentifier:(id)a1 associatedAppBundleIdentifier:(id)a2 parameters:(id)a3 displayString:(id)a4 title:(id)a5 subtitle:(id)a6 icon:(id)a7;
- (id)initWithIdentifier:(id)a0 wfActionIdentifier:(id)a1 associatedAppBundleIdentifier:(id)a2 parameters:(id)a3 displayString:(id)a4 title:(id)a5 subtitle:(id)a6 icon:(id)a7 accessoryIcon:(id)a8 actionShowsUserInterface:(BOOL)a9 actionHasResult:(BOOL)a10 isReversible:(BOOL)a11;
- (id)initWithIdentifier:(id)a0 wfActionIdentifier:(id)a1 type:(unsigned long long)a2 correspondingSystemActionType:(unsigned long long)a3 associatedAppBundleIdentifier:(id)a4 resultFileOperation:(long long)a5 alternate:(BOOL)a6 filteringBehavior:(id)a7 parameters:(id)a8 displayString:(id)a9 title:(id)a10 subtitle:(id)a11 icon:(id)a12;
- (id)initWithIdentifier:(id)a0 wfActionIdentifier:(id)a1 type:(unsigned long long)a2 correspondingSystemActionType:(unsigned long long)a3 associatedAppBundleIdentifier:(id)a4 resultFileOperation:(long long)a5 alternate:(BOOL)a6 filteringBehavior:(id)a7 parameters:(id)a8 displayString:(id)a9 title:(id)a10 subtitle:(id)a11 icon:(id)a12 accessoryIcon:(id)a13 actionShowsUserInterface:(BOOL)a14 isReversible:(BOOL)a15;
- (id)runDescriptorForSurface:(unsigned long long)a0;
- (id)runRequestForSurface:(unsigned long long)a0;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)a0;

@end
