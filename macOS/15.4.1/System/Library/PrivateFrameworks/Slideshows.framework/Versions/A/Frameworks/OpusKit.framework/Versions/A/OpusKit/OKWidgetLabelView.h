@class NSShadow;

@interface OKWidgetLabelView : OKWidgetLabelViewProxy {
    NSShadow *_shadow;
}

- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (void)setSettingTextBackgroundColor:(id)a0;
- (void)setSettingTextShadowColor:(id)a0;
- (void)setSettingTextShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (id)settingTextShadowColor;
- (struct CGSize { double x0; double x1; })settingTextShadowOffset;

@end
