@class SCNText;

@interface OKWidgetSceneKitText : OKWidgetSceneKitGeometry {
    SCNText *_text;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingFont:(id)a0;
- (struct CGSize { double x0; double x1; })settingTextSize;
- (void)setSettingAlignmentMode:(id)a0;
- (void)setSettingChamferRadius:(double)a0;
- (void)setSettingContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingExtrusionDepth:(double)a0;
- (void)setSettingString:(id)a0;
- (void)setSettingTruncationMode:(id)a0;
- (void)setSettingWrapped:(BOOL)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingAlignmentMode;
- (double)settingChamferRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContainerFrame;
- (double)settingExtrusionDepth;
- (id)settingFont;
- (id)settingObjectForKey:(id)a0;
- (id)settingString;
- (id)settingTruncationMode;
- (BOOL)settingWrapped;

@end
