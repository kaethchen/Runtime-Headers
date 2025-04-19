@class SCNPyramid;

@interface OKWidgetSceneKitPyramid : OKWidgetSceneKitGeometry {
    SCNPyramid *_pyramid;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingHeight:(double)a0;
- (void)setSettingHeightSegmentCount:(long long)a0;
- (void)setSettingLength:(double)a0;
- (void)setSettingLengthSegmentCount:(long long)a0;
- (void)setSettingWidth:(double)a0;
- (void)setSettingWidthSegmentCount:(long long)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingHeight;
- (long long)settingHeightSegmentCount;
- (double)settingLength;
- (long long)settingLengthSegmentCount;
- (id)settingObjectForKey:(id)a0;
- (double)settingWidth;
- (double)settingWidthSegmentCount;

@end
