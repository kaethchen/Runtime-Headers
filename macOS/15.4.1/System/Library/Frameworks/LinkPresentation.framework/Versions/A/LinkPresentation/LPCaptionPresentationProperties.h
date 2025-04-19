@class NSNumber, NSString, NSAttributedString, NSColor;

@interface LPCaptionPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic) double textScale;
@property (retain, nonatomic) NSNumber *maximumNumberOfLines;

- (id)init;
- (void).cxx_destruct;

@end
