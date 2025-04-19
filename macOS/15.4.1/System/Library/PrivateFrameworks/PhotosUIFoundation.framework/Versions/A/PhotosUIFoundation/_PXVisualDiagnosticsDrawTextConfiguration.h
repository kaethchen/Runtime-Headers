@class NSColor, NSString, NSAttributedString, NSFont;

@interface _PXVisualDiagnosticsDrawTextConfiguration : NSObject <PXVisualDiagnosticsDrawTextConfiguration>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSFont *font;
@property (copy, nonatomic) NSColor *textColor;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic) struct CGPoint { double x; double y; } relativePosition;

- (id)init;
- (void).cxx_destruct;

@end
