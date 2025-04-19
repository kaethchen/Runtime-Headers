@class NSString;

@interface INConfigurableDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *intentClassName;
@property (readonly, copy, nonatomic) NSString *kind;

- (id)description;
- (void).cxx_destruct;
- (BOOL)supportsIntent:(id)a0;
- (id)_extensionRecordWithError:(id *)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 intentClassName:(id)a2;

@end
