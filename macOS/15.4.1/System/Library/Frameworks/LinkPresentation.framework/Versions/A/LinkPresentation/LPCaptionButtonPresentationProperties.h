@class LPCaptionButtonCollapsedPresentationProperties, NSString, NSArray, NSNumber, LPImage, NSAttributedString, NSColor;

@interface LPCaptionButtonPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long type;
@property (nonatomic) long long shape;
@property (retain, nonatomic) NSColor *foregroundColor;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) LPCaptionButtonCollapsedPresentationProperties *collapsedButton;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) double minimumWidth;
@property (retain, nonatomic) NSNumber *requiresInlineButton;
@property (nonatomic) BOOL disabled;

- (void).cxx_destruct;

@end
