@interface INWidgetExtensionProvider : NSObject

@property (class, readonly, nonatomic) INWidgetExtensionProvider *sharedProvider;

- (id)init;
- (id)descriptorForIntent:(id)a0;

@end
