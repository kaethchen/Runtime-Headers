@class NSString, OKWidgetSceneKitNode, NSMutableDictionary;

@interface OKWidgetSceneKitMaterial : SCNMaterial <OKSettingsSupport> {
    NSMutableDictionary *_materialPropertiesToApply;
}

@property (nonatomic) OKWidgetSceneKitNode *parentNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (id)settingEmission;
- (id)settingMultiply;
- (id)settingSpecular;
- (void)loadMaterialProperties;
- (void)setSettingAmbient:(id)a0;
- (void)setSettingDiffuse:(id)a0;
- (void)setSettingDoubleSided:(BOOL)a0;
- (void)setSettingEmission:(id)a0;
- (void)setSettingLightingModelName:(id)a0;
- (void)setSettingLitPerPixel:(BOOL)a0;
- (void)setSettingLocksAmbientWithDiffuse:(BOOL)a0;
- (void)setSettingMultiply:(id)a0;
- (void)setSettingNormal:(id)a0;
- (void)setSettingReflective:(id)a0;
- (void)setSettingShininess:(double)a0;
- (void)setSettingSpecular:(id)a0;
- (void)setSettingTransparency:(double)a0;
- (void)setSettingTransparencyMode:(long long)a0;
- (void)setSettingTransparent:(id)a0;
- (void)setSettingWritesToDepthBuffer:(BOOL)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingAmbient;
- (id)settingDiffuse;
- (BOOL)settingDoubleSided;
- (id)settingLightingModelName;
- (BOOL)settingLitPerPixel;
- (BOOL)settingLocksAmbientWithDiffuse;
- (id)settingNormal;
- (id)settingObjectForKey:(id)a0;
- (id)settingReflective;
- (double)settingShininess;
- (double)settingTransparency;
- (long long)settingTransparencyMode;
- (id)settingTransparent;
- (BOOL)settingWritesToDepthBuffer;

@end
