@class NSFont;

@interface CPKEmojiGraphics : NSObject

@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSFont *font;

+ (id)macOSDefaultEmojiGraphics;
+ (id)macOSDefaultEmojiGraphicsWithCombinedSetting:(BOOL)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })emojiCellBounds;
- (struct CGSize { double x0; double x1; })emojiSize;

@end
