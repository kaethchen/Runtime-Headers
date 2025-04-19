@class SCNNode, NSString, OKWidgetSceneKitView;

@interface OKWidgetSceneKitNodeProxy : NSObject <OKSettingsSupport> {
    OKWidgetSceneKitView *_widgetScene;
}

@property (readonly, retain, nonatomic) SCNNode *node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyForNode:(id)a0 widgetScene:(id)a1;
+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })settingPosition;
- (struct SCNVector4 { double x0; double x1; double x2; double x3; })settingRotation;
- (id)initWithNode:(id)a0 widgetScene:(id)a1;
- (void)setSettingChildNodes:(id)a0;
- (void)setSettingHidden:(BOOL)a0;
- (void)setSettingMaterials:(id)a0;
- (void)setSettingOpacity:(double)a0;
- (void)setSettingPosition:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setSettingRotation:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingScale:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingChildNodes;
- (BOOL)settingHidden;
- (id)settingMaterials;
- (id)settingObjectForKey:(id)a0;
- (double)settingOpacity;
- (struct SCNVector3 { double x0; double x1; double x2; })settingScale;

@end
