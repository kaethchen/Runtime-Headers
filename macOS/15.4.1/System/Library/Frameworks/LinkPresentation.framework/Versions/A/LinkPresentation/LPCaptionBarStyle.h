@class LPCollaborationFooterStyle, LPPointUnit, LPCaptionBarAccessoryStyle, LPAudioPlayButtonStyle, LPPadding, LPIconBadgeStyle, LPButtonStyle, NSColor, LPImageViewStyle, LPVerticalTextStackViewStyle;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge;
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (retain, nonatomic) LPPointUnit *trailingPaddingForPresenceOfLeadingIcon;
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;
@property (nonatomic) BOOL usesOutOfLineButton;
@property (nonatomic) BOOL canAddLineForButton;
@property (nonatomic) BOOL positionButtonRelativeToTextStack;
@property (nonatomic) BOOL buttonRespectsTextStackPadding;
@property (nonatomic) BOOL buttonIgnoresTextSafeAreaInsets;
@property (nonatomic) BOOL addFullWidthLineForButton;
@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL expandButtonToCaptionEdge;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter;
@property (retain, nonatomic) LPCollaborationFooterStyle *collaborationFooter;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 sizeClassParameters:(id)a2 fontScalingFactor:(double)a3;
- (id)leftAccessory;
- (id)leftIcon;
- (id)rightAccessory;
- (id)rightIcon;

@end
