@class NSArray, NSMutableDictionary, CKStoreClient, NSString, FRJSObject;

@interface FRBundleInterface : NSObject <NSKeyedUnarchiverDelegate, FRJSMessagingDelegate, FRJSObjectDelegate>

@property (readonly, nonatomic) struct OpaqueWKBundle { } *bundle;
@property (readonly, nonatomic) struct OpaqueWKBundlePage { } *page;
@property (readonly, nonatomic) struct OpaqueWKBundleFrame { } *frame;
@property (readonly, nonatomic) struct OpaqueWKBundleScriptWorld { } *world;
@property (readonly, nonatomic) struct OpaqueWKBundleDOMWindowExtension { } *windowExtension;
@property (readonly, nonatomic) FRJSObject *rootObject;
@property (readonly, nonatomic) NSArray *rootObjectFunctions;
@property (readonly, nonatomic) NSArray *rootObjectProperties;
@property (readonly, nonatomic) NSMutableDictionary *eventListeners;
@property (readonly, nonatomic) NSMutableDictionary *contextMenus;
@property (retain, nonatomic) NSMutableDictionary *activeContextMenu;
@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedMessageClasses;

- (void)dealloc;
- (void).cxx_destruct;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (struct OpaqueJSValue { } *)_callJavaScriptFunction:(const char *)a0 inContext:(struct OpaqueJSContext { } *)a1 thisObject:(struct OpaqueJSValue { } *)a2 argumentCount:(unsigned long long)a3 arguments:(const struct OpaqueJSValue **)a4;
- (struct OpaqueWKArray { } *)_contextMenuItemsForJSContextMenuNamed:(id)a0 appendingDefaultMenu:(struct OpaqueWKArray { } *)a1 withDOMElement:(struct OpaqueJSValue { } *)a2 context:(struct OpaqueJSContext { } *)a3;
- (struct OpaqueJSValue { } *)_getJavaScriptProperty:(const char *)a0 inContext:(struct OpaqueJSContext { } *)a1 thisObject:(struct OpaqueJSValue { } *)a2;
- (void)contextMenuDismissed;
- (void)contextMenuItemClicked:(id)a0;
- (void)didReceiveMessage:(id)a0 messageBody:(id)a1;
- (void)dispatchEvent:(id)a0 withEventObject:(id)a1;
- (void)dispatchGlobalEvent:(id)a0 withEventObject:(id)a1;
- (BOOL)hasFunction:(id)a0 forObject:(id)a1;
- (BOOL)hasProperty:(id)a0 forObject:(id)a1;
- (id)initWithBundle:(struct OpaqueWKBundle { } *)a0 userData:(id)a1;
- (id)object:(id)a0 callFunction:(id)a1 withArguments:(id)a2;
- (id)object:(id)a0 getProperty:(id)a1;
- (void)sendMessage:(id)a0 messageBody:(id)a1;
- (id)sendSynchronousMessage:(id)a0 messageBody:(id)a1;

@end
