@class OKWidgetSceneKitView, NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface OKWidgetSceneKitNode : SCNNode <OKSettingsSupport, OKWidgetSceneKitViewProxyExports> {
    NSString *_c3dFile;
    NSArray *_nodeNames;
    NSDictionary *_animationsPath;
    NSMutableDictionary *_animations;
    NSDictionary *_options;
    NSArray *_constraints;
}

@property (nonatomic) OKWidgetSceneKitView *widgetScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setupConstraints;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (void)setupOptions;
- (struct SCNVector3 { double x0; double x1; double x2; })settingPosition;
- (struct SCNVector4 { double x0; double x1; double x2; double x3; })settingRotation;
- (void)setupAnimations;
- (id)allKeysForDictionaryProxy:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)loadSettings:(id)a0;
- (void)parentLoaded;
- (void)playAnimationWithKey:(id)a0 removeOnCompletion:(BOOL)a1;
- (void)setSettingAnimations:(id)a0;
- (void)setSettingC3dFile:(id)a0;
- (void)setSettingChildNodes:(id)a0;
- (void)setSettingConstraints:(id)a0;
- (void)setSettingHidden:(BOOL)a0;
- (void)setSettingNodeNames:(id)a0;
- (void)setSettingOpacity:(double)a0;
- (void)setSettingOptions:(id)a0;
- (void)setSettingPosition:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setSettingRotation:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingScale:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingAnimations;
- (id)settingC3dFile;
- (id)settingChildNodes;
- (id)settingConstraints;
- (BOOL)settingHidden;
- (id)settingNodeNames;
- (id)settingObjectForKey:(id)a0;
- (double)settingOpacity;
- (id)settingOptions;
- (struct SCNVector3 { double x0; double x1; double x2; })settingScale;
- (void)setupFile;

@end
