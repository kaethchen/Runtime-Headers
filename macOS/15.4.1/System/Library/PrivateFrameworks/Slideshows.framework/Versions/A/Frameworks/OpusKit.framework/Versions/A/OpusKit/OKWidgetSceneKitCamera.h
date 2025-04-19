@class SCNCamera;

@interface OKWidgetSceneKitCamera : OKWidgetSceneKitNode {
    SCNCamera *_camera;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingXFov:(double)a0;
- (void)setSettingZFar:(double)a0;
- (void)setSettingYFov:(double)a0;
- (void)setSettingCameraName:(id)a0;
- (void)setSettingUsesOrthographicProjection:(BOOL)a0;
- (void)setSettingZNear:(double)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingCameraName;
- (id)settingObjectForKey:(id)a0;
- (BOOL)settingUsesOrthographicProjection;
- (double)settingXFov;
- (double)settingYFov;
- (double)settingZFar;
- (double)settingZNear;

@end
