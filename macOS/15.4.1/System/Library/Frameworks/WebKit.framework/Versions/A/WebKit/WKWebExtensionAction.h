@class NSString, NSArray, WKWebExtensionContext, WKWebView, NSPopover;
@protocol WKWebExtensionTab;

@interface WKWebExtensionAction : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionAction> { struct type { unsigned char __lx[192]; } data; } _webExtensionAction;
}

@property (readonly, nonatomic) void *_webExtensionAction;
@property (readonly, weak, nonatomic) WKWebExtensionContext *webExtensionContext;
@property (readonly, weak, nonatomic) id<WKWebExtensionTab> associatedTab;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *badgeText;
@property (nonatomic) BOOL hasUnreadBadgeText;
@property (copy, nonatomic) NSString *inspectionName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *menuItems;
@property (readonly, nonatomic) BOOL presentsPopup;
@property (readonly, nonatomic) NSPopover *popupPopover;
@property (readonly, nonatomic) WKWebView *popupWebView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct Ref<WebKit::WebExtensionAction, WTF::RawPtrTraits<WebKit::WebExtensionAction>, WTF::DefaultRefDerefTraits<WebKit::WebExtensionAction>> { struct WebExtensionAction *x0; })_protectedWebExtensionAction;
- (void)closePopup;
- (id)iconForSize:(struct CGSize { double x0; double x1; })a0;

@end
