@class WFContextualAction, WFExecutableAppShortcutIdentifier;

@interface WFConfiguredSystemContextualAction : WFConfiguredSystemAction

@property (readonly, nonatomic) WFContextualAction *contextualAction;
@property (readonly, nonatomic) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextualAction:(id)a0 appShortcutIdentifier:(id)a1 shortcutsMetadata:(id)a2;
- (id)initWithContextualAction:(id)a0 appShortcutIdentifier:(id)a1 shortcutsMetadata:(id)a2 colorScheme:(id)a3;

@end
