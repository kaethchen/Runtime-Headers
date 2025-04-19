@class CSSearchableItem;

@interface VoiceShortcuts.WFAppEntityContextualAction : WFContextualAction {
    void /* unknown type, empty encoding */ entityTypeIdentifier;
    void /* unknown type, empty encoding */ typeDisplayName;
}

@property (nonatomic, readonly) CSSearchableItem *spotlightItem;

+ (id)spotlightDomainIdentifierForEntityType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 wfActionIdentifier:(id)a1 type:(unsigned long long)a2 correspondingSystemActionType:(unsigned long long)a3 associatedAppBundleIdentifier:(id)a4 resultFileOperation:(long long)a5 alternate:(BOOL)a6 filteringBehavior:(id)a7 parameters:(id)a8 displayString:(id)a9 title:(id)a10 subtitle:(id)a11 icon:(id)a12 accessoryIcon:(id)a13 actionShowsUserInterface:(BOOL)a14 isReversible:(BOOL)a15;
- (id)initWithIdentifier:(id)a0 displayTitle:(id)a1 entityType:(long long)a2;

@end
