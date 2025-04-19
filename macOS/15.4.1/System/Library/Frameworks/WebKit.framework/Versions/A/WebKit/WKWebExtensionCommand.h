@class NSString, NSMenuItem, WKWebExtensionContext;

@interface WKWebExtensionCommand : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionCommand> { struct type { unsigned char __lx[72]; } data; } _webExtensionCommand;
}

@property (readonly, nonatomic) void *_webExtensionCommand;
@property (readonly, copy, nonatomic) NSString *_shortcut;
@property (readonly, copy, nonatomic) NSString *_userVisibleShortcut;
@property (readonly, nonatomic) BOOL _isActionCommand;
@property (readonly, weak, nonatomic) WKWebExtensionContext *webExtensionContext;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *activationKey;
@property (nonatomic) unsigned long long modifierFlags;
@property (readonly, copy, nonatomic) NSMenuItem *menuItem;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)_matchesEvent:(id)a0;
- (struct Ref<WebKit::WebExtensionCommand, WTF::RawPtrTraits<WebKit::WebExtensionCommand>, WTF::DefaultRefDerefTraits<WebKit::WebExtensionCommand>> { struct WebExtensionCommand *x0; })_protectedWebExtensionCommand;

@end
