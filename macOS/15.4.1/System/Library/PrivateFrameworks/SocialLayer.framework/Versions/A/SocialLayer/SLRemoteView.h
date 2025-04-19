@class UISSlotStyle, SLDServiceProxy, SLSlotView, NSObject;
@protocol OS_dispatch_queue, UISSlotAnyContent;

@interface SLRemoteView : NSView <SLDServiceProxyDelegate>

@property (retain, nonatomic) id<UISSlotAnyContent> placeholderSlotContent;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle;
@property (nonatomic) BOOL remoteContentIsLoaded;
@property (readonly, nonatomic) SLDServiceProxy *serviceProxy;
@property (readonly, nonatomic) SLSlotView *slotView;
@property (nonatomic) BOOL remoteRenderingEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteRenderingQueue;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;
- (void)serviceProxyDidConnect:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (id)_finalSlotStyleForStyle:(id)a0;
- (void)_provideContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (id)initWithServiceProxyClass:(Class)a0 maxWidth:(double)a1;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)remoteContentIsLoadedValueChanged;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (BOOL)shouldInvalidatePreviousPlaceHolderSlotContent:(id)a0 forStyle:(id)a1;

@end
