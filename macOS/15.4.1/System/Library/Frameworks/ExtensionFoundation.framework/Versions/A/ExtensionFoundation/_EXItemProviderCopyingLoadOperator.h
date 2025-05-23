@class NSDictionary, NSString, NSItemProvider;

@interface _EXItemProviderCopyingLoadOperator : NSObject <_EXItemProviderLoading>

@property (class, readonly) BOOL supportsSecureCoding;

@property NSItemProvider *itemProvider;
@property (retain) NSDictionary *loadedItems;
@property struct { unsigned int val[8]; } destinationProcessAuditToken;
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
- (id)_loadItemsForTypeIdentifiers:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 itemProvider:(id)a2;
- (id)_sandboxedResourceForItemIfNeeded:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 error:(id *)a2;
- (id)initWithItemProvider:(id)a0 destinationProcessAuditToken:(struct { unsigned int x0[8]; })a1;

@end
