@class NSExtension, NSURL, NSDictionary, MEExtensionHostContext, EFPromise, NSObject, MERemoteExtensionContext, NSImage, NSString, NSViewController, NSArray, MEMailComposeToolbarItemInfo, NSUUID;
@protocol MEContentBlocker_Private, MEComposeSessionHandler_Private, MEMessageSecurityHandler, MEMessageActionHandler_Private, OS_dispatch_queue, MEComposeSessionHandler;

@interface MERemoteExtension : NSObject <EFPubliclyDescribable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteExtensionProxyLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLevelLock;
    NSString *_dataAccessReason;
    unsigned long long _bodyAccess;
    NSViewController *remoteViewController;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionLoadingQueue;
@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSString *extensionID;
@property (nonatomic) BOOL entitlementVerified;
@property (retain, nonatomic) EFPromise *remoteExtensionProxyPromise;
@property (readonly, nonatomic) MERemoteExtensionContext *extensionContext;
@property (readonly) MEExtensionHostContext *extensionHostContext;
@property (readonly) NSUUID *contextUUID;
@property (readonly, copy) NSString *dataAccessReason;
@property (readonly, copy) NSDictionary *headerAccessLevels;
@property (readonly) BOOL bodyAccess;
@property (readonly) BOOL hasMessageContentAccess;
@property (readonly, nonatomic) id<MEComposeSessionHandler_Private> synchronousComposeSessionInterface;
@property (readonly, nonatomic) id<MEMessageSecurityHandler> synchronousMessageSecurityInterface;
@property (readonly, nonatomic) id<MEMessageActionHandler_Private> synchronousMessageActionProviderInterface;
@property (readonly, nonatomic) id<MEContentBlocker_Private> synchronousContentBlockerInterface;
@property (copy) id /* block */ securityErrorHandler;
@property (readonly, nonatomic) id<MEMessageActionHandler_Private> messageActionProviderInterface;
@property (readonly, nonatomic) id<MEComposeSessionHandler> composeSessionInterface;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSString *containingAppDisplayName;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, nonatomic) NSString *descriptionText;
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL outboundNetworkingAllowed;
@property (readonly, nonatomic) BOOL inboundNetworkingAllowed;
@property (readonly, nonatomic) NSImage *preferencesIcon;
@property (readonly, nonatomic) NSImage *menuIcon;
@property (readonly, nonatomic) NSImage *toolbarIcon;
@property (readonly, nonatomic) NSImage *messageSecurityDecoderIcon;
@property (readonly, nonatomic) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)allCapabilities;
+ (id)allCapabilitiesRequiringMessageContentAccess;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (id)getMessageSecurityInterfaceWithError:(id *)a0;
- (id)_getInterfaceForExtensionCapability:(id)a0 error:(id *)a1;
- (void)_getRemoteViewServiceWithCompletionHandler:(id /* block */)a0;
- (id)_interfaceForExtensionCapability:(id)a0;
- (id)_loadRemoteExtesionProxyFuture;
- (void)_nts_loadBodyAccess;
- (void)_nts_loadDataAccessReason;
- (id)_remoteExtensionProxyFuture;
- (id)_synchronousInterfaceForExtensionCapability:(id)a0;
- (void)addSecurityExtensionErrorHandler:(id /* block */)a0;
- (id)contentBlockerInterface;
- (void)getDecodedMailViewControllerForMessageContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMailComposeExtensionViewControllerForSession:(id)a0 hostDelegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)a0 completionHandler:(id /* block */)a1;
- (id)interfaceForExtensionCapability:(id)a0;
- (id)messageSecurityInterface;
- (void)primaryActionClickedForMessageContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)toolbarIconTooltip;

@end
