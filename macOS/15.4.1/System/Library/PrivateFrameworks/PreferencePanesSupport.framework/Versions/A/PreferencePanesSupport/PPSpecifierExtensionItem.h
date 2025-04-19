@class NSXPCConnection, NSView, NSString, NSExtension, NSArray, NSObject, NSRemoteViewController, NSXPCListener, NSImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSpecifierExtensionItem : NSObject <PPSpecifierExtensionPosting, NSXPCListenerDelegate> {
    BOOL _editable;
    NSArray *_searchKeywords;
}

@property (retain) NSXPCListener *listener;
@property (retain) NSXPCConnection *commConnection;
@property (retain) NSRemoteViewController *remoteViewController;
@property (retain) NSExtension *extension;
@property (retain) NSView *extensionViewHost;
@property (retain) NSObject<OS_dispatch_semaphore> *commConnectionQueueSema;
@property (retain) NSObject<OS_dispatch_queue> *commConnectionQueue;
@property (copy) id /* block */ viewDidLoadCompleteBlock;
@property BOOL extenionDidLoad;
@property (readonly) NSString *name;
@property (readonly) NSImage *icon;
@property (getter=isEditable) BOOL editable;
@property (readonly) NSView *view;
@property (readonly) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;

- (id)name;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)view;
- (void)___nsx_pingHost:(id /* block */)a0;
- (id)helpAnchor;
- (id)icon;
- (void)setEditable:(BOOL)a0;
- (void)setPersonality:(id)a0;
- (void)updateView;
- (id)initWithExtension:(id)a0;
- (BOOL)loadWithCompletion:(id /* block */)a0;
- (void)didUnselect;
- (void)willSelect;
- (BOOL)hasElementForKey:(id)a0;
- (void)revealElementForKey:(id)a0;
- (void)extension:(id)a0 viewBridgeEndpoint:(id)a1 commChannelEndpoint:(id)a2;

@end
