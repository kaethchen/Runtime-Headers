@class NSObject;
@protocol NSControlStateContentStyle;

@interface NSSegmentItemLabelCell : NSTextFieldCell

@property (copy, nonatomic, setter=_setContentStyleOverride:) NSObject<NSControlStateContentStyle> *_contentStyleOverride;

+ (id)_getParentSegmentedControlViewFromView:(id)a0;

- (void)dealloc;
- (id)_textAttributes;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)_textFieldContentStyleInView:(id)a0 withBackgroundStyle:(long long)a1;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (long long)interiorBackgroundStyle;

@end
