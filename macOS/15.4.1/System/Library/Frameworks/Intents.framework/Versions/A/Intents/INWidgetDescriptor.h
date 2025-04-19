@interface INWidgetDescriptor : INConfigurableDescriptor

@property (readonly, nonatomic) long long preferredSizeClass;

- (id)description;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 intentClassName:(id)a2 preferredSizeClass:(long long)a3;

@end
