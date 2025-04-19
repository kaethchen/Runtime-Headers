@class SCNPlane;

@interface OKWidgetSceneKitPlane : OKWidgetSceneKitGeometry {
    SCNPlane *_plane;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingWidth:(double)a0;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (id)settingObjectForKey:(id)a0;
- (double)settingWidth;
- (long long)settingWidthSegmentCount;

@end
