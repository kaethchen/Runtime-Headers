@class SFSafariExtensionViewController, NSUUID, NSString;

@interface SFSafariExtensionContext : NSExtensionContext <SFSafariExtensionVendorProtocol>

@property (readonly, nonatomic) SFSafariExtensionViewController *extensionViewController;
@property (readonly, nonatomic) NSUUID *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_isPrincipalObjectValid;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)_completeRequest;
- (void)_completeRequestAfterDelay;
- (void)additionalRequestHeadersForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)contentBlockerWithIdentifier:(id)a0 blockedResourcesWithURLs:(id)a1 onPage:(id)a2;
- (void)contextMenuItemSelectedWithCommand:(id)a0 inPage:(id)a1 userInfo:(id)a2;
- (void)messageReceivedFromContainingAppWithName:(id)a0 userInfo:(id)a1;
- (void)messageReceivedWithName:(id)a0 fromPage:(id)a1 userInfo:(id)a2;
- (void)page:(id)a0 willNavigateToURL:(id)a1;
- (void)popoverDidCloseInWindow:(id)a0;
- (void)popoverWillShowInWindow:(id)a0;
- (void)toolbarItemClickedInWindow:(id)a0;
- (void)validateContextMenuItemWithCommand:(id)a0 inPage:(id)a1 userInfo:(id)a2 validationHandler:(id /* block */)a3;
- (void)validateToolbarItemInWindow:(id)a0 validationHandler:(id /* block */)a1;

@end
