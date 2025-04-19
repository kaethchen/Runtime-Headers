@class NSString, NSExtensionContext, NSImage, NSDate, NSExtension, NSUUID;
@protocol NCRemotePlugInClient, NCRemoteViewServiceProtocol, NCRemoteViewExtensionContextProtocol;

@interface NCRemotePlugIn : NSExtensionContext <NSCopying> {
    BOOL _pluginUsing;
    NSUUID *_extensionRequestIdentifier;
}

@property (retain, nonatomic) NSExtensionContext<NCRemoteViewExtensionContextProtocol> *extensionContext;
@property (weak, nonatomic) id<NCRemotePlugInClient> delegate;
@property (readonly) NSExtension *extension;
@property (readonly) NSString *path;
@property (readonly) NSString *identifier;
@property (readonly) NSString *containerIdentifier;
@property (readonly) NSString *name;
@property (readonly) NSImage *image;
@property (readonly) NSString *imagePath;
@property (readonly) NSString *imageBundlePath;
@property (readonly) double defaultHeight;
@property (readonly) NSString *configurationDescription;
@property (readonly) BOOL isSnippet;
@property (readonly) BOOL isLive;
@property (readonly) unsigned long long appearance;
@property (readonly) long long compatibilityMode;
@property (readonly) int processIdentifier;
@property (readonly) NSString *extensionUUID;
@property (readonly) NSDate *modificationDate;
@property (nonatomic) unsigned long long activationType;
@property (readonly) BOOL outOfBundle;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly) id<NCRemoteViewServiceProtocol> proxyObject;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (void)_commonSetup;
- (void)_activatePlugIn;
- (void)_deactivatePlugIn;
- (void)_extensionSessionInvalidated:(id)a0;
- (void)_notifyDelegateOfActiveStateChange:(BOOL)a0;
- (void)_serviceAlive;
- (void)_serviceDied;
- (BOOL)entitlementValue:(id)a0;
- (BOOL)setupPlugIn;

@end
