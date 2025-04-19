@class NSString, NSMutableDictionary, MMScriptFactory, MMScriptInterface;

@interface MMUserContentController : WKUserContentController <WKScriptMessageHandler> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _messageBlocksLock;
    NSMutableDictionary *_messageBlocks;
}

@property (retain, nonatomic) MMScriptFactory *factory;
@property (retain, nonatomic) MMScriptInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_addContentForInvocation:(id)a0;
- (void)_addEssentialContent;
- (id)_allMessageBlockNames;
- (void)_executeInvocation:(id)a0 body:(id)a1 resolver:(id)a2;
- (id)_freshInvocation:(id)a0;
- (id)_functionScriptForInvocation:(id)a0 withName:(id)a1;
- (id /* block */)_messageBlockForName:(id)a0;
- (void)_removeAllContent;
- (void)_resolveFunctionCallWithToken:(id)a0 arguments:(id)a1 webView:(id)a2;
- (void)_setMessageBlock:(id /* block */)a0 forName:(id)a1;
- (void)_setupContentForInterface:(id)a0;
- (void)_unresolveFunctionCallWithToken:(id)a0 webView:(id)a1;

@end
