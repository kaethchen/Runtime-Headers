@class NSUUID, NSString;

@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *identifier;
@property (copy) NSUUID *extensionContextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadItemForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1 expectedValueClass:(Class)a2 options:(id)a3;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)a0 expectedValueClass:(Class)a1 options:(id)a2;
- (id)initWithExtensionContextIdentifier:(id)a0;

@end
