@class OFNSView, SCNView, OKSCNOrigamiNode, NSString, OKWidgetView, OFNSImageView;

@interface OKWidgetSCNOrigamiViewProxy : OKWidgetView <SCNSceneRendererDelegate> {
    OKWidgetView *_frontWidgetView;
    OKWidgetView *_backWidgetView;
    NSString *_backSnapshotWidgetName;
    OKWidgetView *_backSnapshotWidgetView;
    OFNSImageView *_backSnapshotView;
    OFNSView *_backContents;
}

@property (nonatomic) OKSCNOrigamiNode *origamiNode;
@property (nonatomic) SCNView *sceneView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (void)renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (void)prepareForReload;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)toggleAnimation;
- (void)_prepare:(BOOL)a0;
- (void)_prepareBackContentsIfNeeded;
- (void)_prepareBackSnapshotWidgetView;
- (void)_updateBackSnapshotView;
- (void)_widgetViewReadinessNotification:(id)a0;
- (void)prepareForRefresh;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingBackSnapshotWidgetName:(id)a0;
- (void)setSettingBackWidget:(id)a0;
- (void)setSettingDefaultState:(id)a0;
- (void)setSettingFrontWidget:(id)a0;

@end
