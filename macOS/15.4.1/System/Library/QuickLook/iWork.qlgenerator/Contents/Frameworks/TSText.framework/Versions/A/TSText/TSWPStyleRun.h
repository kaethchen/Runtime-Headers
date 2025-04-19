@class TSWPCharacterStyle, NSDictionary;

@interface TSWPStyleRun : NSObject <NSCopying>

@property (nonatomic) unsigned long long charIndex;
@property (nonatomic) unsigned long long runLength;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) TSWPCharacterStyle *characterStyle;
@property (nonatomic) struct __CTFont { } *ctFont;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct TSWPFontHeightInfo { double spaceBefore; double attachmentHeight; double ascent; double capHeight; double descent; double leadingAbove; double leadingBelow; double spaceAfter; double verticalHeight; double xHeight; double underlinePosition; double underlineThickness; } fontHeightInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)coalesceWith:(id)a0;

@end
