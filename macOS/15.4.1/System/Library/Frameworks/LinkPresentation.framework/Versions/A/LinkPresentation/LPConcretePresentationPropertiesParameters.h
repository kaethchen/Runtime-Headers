@class NSColor, NSAttributedString, LPCaptionButtonPresentationProperties;

@interface LPConcretePresentationPropertiesParameters : NSObject

@property (readonly, nonatomic) BOOL usesComputedPresentationProperties;
@property (readonly, nonatomic) BOOL inComposeContext;
@property (readonly, nonatomic) BOOL inSenderContext;
@property (readonly, nonatomic) BOOL allowsTapping;
@property (readonly, nonatomic) unsigned long long effectiveSizeClass;
@property (readonly, nonatomic) NSColor *overrideSubtitleButtonColor;
@property (readonly, nonatomic) NSColor *overrideActionButtonColor;
@property (readonly, nonatomic) NSAttributedString *overrideSubtitle;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionButton;
@property (readonly, nonatomic) LPCaptionButtonPresentationProperties *captionTextButton;

- (void).cxx_destruct;
- (id)initWithUsesComputedPresentationProperties:(BOOL)a0 inComposeContext:(BOOL)a1 inSenderContext:(BOOL)a2 allowsTapping:(BOOL)a3 effectiveSizeClass:(unsigned long long)a4 overrideSubtitleButtonColor:(id)a5 overrideActionButtonColor:(id)a6 overrideSubtitle:(id)a7 captionButton:(id)a8 captionTextButton:(id)a9;

@end
