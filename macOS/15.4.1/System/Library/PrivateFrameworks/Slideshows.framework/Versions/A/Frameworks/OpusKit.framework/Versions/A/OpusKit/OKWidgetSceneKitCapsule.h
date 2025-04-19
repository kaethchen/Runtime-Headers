@class SCNCapsule;

@interface OKWidgetSceneKitCapsule : OKWidgetSceneKitGeometry {
    SCNCapsule *_capsule;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingCapRadius:(double)a0;
- (void)setSettingCapSegmentCount:(long long)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingRadialSegmentCount:(long long)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingCapRadius;
- (long long)settingCapSegmentCount;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (id)settingObjectForKey:(id)a0;
- (long long)settingRadialSegmentCount;

@end
