@class NSColor, NSParagraphStyle, NSFont;

@interface AMSUIMessageMarkdownConfiguration : NSObject

@property (retain) NSColor *color;
@property (retain) NSFont *font;
@property (retain) NSParagraphStyle *paragraphStyle;
@property (retain) NSColor *strikeThroughColor;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 font:(id)a1;

@end
