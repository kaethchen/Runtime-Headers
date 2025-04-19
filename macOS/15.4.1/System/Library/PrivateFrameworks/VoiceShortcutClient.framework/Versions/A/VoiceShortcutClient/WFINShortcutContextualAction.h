@class INShortcut;

@interface WFINShortcutContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) INShortcut *shortcut;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)icon;
- (id)_staticDisplayStringForDecoding;
- (id)workflowRunKind;
- (id)initWithINShortcut:(id)a0;
- (id)runDescriptorForSurface:(unsigned long long)a0;
- (id)runRequestForSurface:(unsigned long long)a0;

@end
