@class NSString, NSColor, NSFont;

@interface VUIMonogramImageConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *bgColor;
@property (nonatomic) double diameter;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) NSColor *textColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
