@class SCNSphere;

@interface OKWidgetSceneKitSphere : OKWidgetSceneKitGeometry {
    SCNSphere *_sphere;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingRadius:(double)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (double)settingRadius;

@end
