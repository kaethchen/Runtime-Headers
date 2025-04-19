@class NSString;

@interface INControlDescriptor : INConfigurableDescriptor

@property (readonly, copy, nonatomic) NSString *actionIntentType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 intentClassName:(id)a2 actionIntentType:(id)a3;

@end
