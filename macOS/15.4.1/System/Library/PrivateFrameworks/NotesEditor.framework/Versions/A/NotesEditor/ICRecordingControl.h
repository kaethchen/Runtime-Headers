@class NSColor, NSTextField, CAShapeLayer;
@protocol ICRecordingControlDelegate;

@interface ICRecordingControl : NSView

@property (retain, nonatomic) CAShapeLayer *outerRingLayer;
@property (retain, nonatomic) CAShapeLayer *innerStateLayer;
@property (retain, nonatomic) CAShapeLayer *pauseShapeLayer;
@property (retain, nonatomic) NSColor *resolvedInnerColor;
@property (retain, nonatomic) NSColor *resolvedOuterColor;
@property (retain, nonatomic) NSColor *resolvedInnerColorResume;
@property (retain, nonatomic) NSColor *resolvedOuterColorResume;
@property (nonatomic) BOOL pressed;
@property (nonatomic) BOOL didBuildSublayers;
@property (nonatomic) double diameter;
@property (nonatomic) double outerRingThickness;
@property (nonatomic) double outerRingGap;
@property (nonatomic) double innerSquareWidth;
@property (nonatomic) double innerSquareCornerRadius;
@property (nonatomic) double pauseStrokeCornerRadius;
@property (retain, nonatomic) NSTextField *namedStateLabel;
@property (nonatomic) long long recordingControlState;
@property (retain, nonatomic) NSColor *fontColor;
@property (retain, nonatomic) NSColor *fontColorResume;
@property (retain, nonatomic) NSColor *innerColor;
@property (retain, nonatomic) NSColor *outerColor;
@property (retain, nonatomic) NSColor *innerColorResume;
@property (retain, nonatomic) NSColor *outerColorResume;
@property (weak, nonatomic) id<ICRecordingControlDelegate> delegate;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)initWithDiameter:(double)a0;
- (id)_textColorForState:(long long)a0;
- (void)_buildSublayers;
- (double)_xInset;
- (void)restyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBounds;
- (id)_accessibilityLabelTextForState:(long long)a0;
- (id)_buttonTextForState:(long long)a0;
- (struct CGPath { } *)_circlePath;
- (struct CGPath { } *)_circlePath:(double)a0;
- (void)_commonLayerUpdate;
- (struct CGPath { } *)_fillPathAnimateEndForState:(long long)a0 fromState:(long long)a1;
- (struct CGPath { } *)_fillPathAnimateStartForState:(long long)a0 fromState:(long long)a1;
- (struct CGPath { } *)_fillPathForState:(long long)a0;
- (struct CGPoint { double x0; double x1; })_getSquarePathPosition;
- (BOOL)_hasOuterRingLayer;
- (struct CGPath { } *)_interactionPath;
- (BOOL)_isInsideForLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)_labelLozengePath;
- (double)_labelWidth;
- (struct CGPath { } *)_microCirclePath;
- (double)_originalRecordingControlDiameter;
- (struct CGPath { } *)_pausePath;
- (void)_processControlActuation;
- (id)_resolvedFillColorForState:(long long)a0;
- (id)_resolvedRingColorForState:(long long)a0;
- (struct CGPath { } *)_ringLozengePath:(BOOL)a0;
- (struct CGPath { } *)_ringLozengePathWithHeight:(double)a0 extraWidth:(double)a1;
- (double)_ringOpacityForState:(long long)a0;
- (struct CGPath { } *)_ringPath:(BOOL)a0;
- (struct CGPath { } *)_ringPathForState:(long long)a0;
- (struct CGPath { } *)_ringPathForState:(long long)a0 includingStrokeThickeness:(BOOL)a1;
- (struct CGPath { } *)_squarePath;
- (void)_styleView;
- (void)_syncLongPressGestureRecognizerEnablement;
- (void)_updateVisibilityOfNamedStateLabel:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateVisualState:(BOOL)a0 fromState:(long long)a1;
- (void)crossfadePauseLayer:(BOOL)a0 animated:(BOOL)a1;
- (void)crossfadeText:(id)a0 color:(id)a1 animated:(BOOL)a2;
- (void)fadeOutPauseAndInText:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelLozengeRectWithLabelIntrinsicWidth:(double)a0;
- (double)layerAlpha;
- (double)paddedLabelWidth:(double)a0;
- (double)paddedLabelWidthWithLabelIntrinsicWidth:(double)a0;
- (double)recordingControlHeight;
- (double)recordingControlInnerSquareWidth;
- (double)recordingControlLozengeFixedWidth;
- (id)recordingControlOuterColor;
- (double)recordingControlOuterRingGapScaleFactor;
- (double)recordingControlPauseGap;
- (double)recordingControlPauseStrokeCornerRadius;
- (double)recordingControlWidthWithLabelIntrinsicWidth:(double)a0;
- (void)resolveColors;
- (void)setRecordAccessibilityLabel;
- (void)setRecordingControlState:(long long)a0 animated:(BOOL)a1 force:(BOOL)a2;
- (void)updateLayerAlphaIfVisible:(id)a0;

@end
