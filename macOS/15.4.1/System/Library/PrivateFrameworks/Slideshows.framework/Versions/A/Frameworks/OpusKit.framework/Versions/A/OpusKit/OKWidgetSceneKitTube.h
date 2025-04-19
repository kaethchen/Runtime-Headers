@class SCNTube;

@interface OKWidgetSceneKitTube : OKWidgetSceneKitGeometry {
    SCNTube *_tube;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingInnerRadius:(double)a0;
- (void)setSettingOuterRadius:(double)a0;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (double)settingInnerRadius;
- (id)settingObjectForKey:(id)a0;
- (double)settingOuterRadius;
- (long long)settingRadialSegmentCount;

@end
