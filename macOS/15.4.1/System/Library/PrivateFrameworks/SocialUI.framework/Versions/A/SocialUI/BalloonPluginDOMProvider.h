@class NSString;
@protocol SOBalloonPluginCache;

@interface BalloonPluginDOMProvider : DOMProvider <DOMEventListener>

@property (weak, nonatomic) id<SOBalloonPluginCache> balloonPluginCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blurredImagePath:(id)a0 andRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)_setUpDTEventListenerIfValid:(id)a0 containerElement:(id)a1 pluginBundleID:(id)a2 domChatItem:(id)a3;
- (id)parseChatItem:(id)a0 DOMChatItem:(id)a1;
- (id)parseInvisbleChatItem:(id)a0 withDOMChatItem:(id)a1 andMessageTextContainerElement:(id)a2;
- (id)parseMediaURL:(id)a0;
- (BOOL)setupGeneralInvisibleInk:(id)a0;
- (BOOL)setupHandwritingInvisibleInk:(id)a0;
- (BOOL)setupInvisibleInkChatItem:(id)a0 withContainerElement:(id)a1;
- (BOOL)setupInvisibleInkChatItemIsHandwritingPlugin:(BOOL)a0 withContainerElement:(id)a1;

@end
