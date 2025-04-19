@class NSString, NSColor;

@interface TIMIconLabel : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSColor *color;
@property (readonly, copy, nonatomic) NSString *fontFamilyName;
@property (readonly, nonatomic) double fontWeight;
@property (readonly, nonatomic) BOOL isASCII;

+ (id)iconLabelWithText:(id)a0 language:(id)a1;
+ (id)iconLabelWithText:(id)a0 language:(id)a1 color:(id)a2;
+ (id)iconLabelWithText:(id)a0 language:(id)a1 color:(id)a2 fontFamilyName:(id)a3 fontWeight:(double)a4;

- (void).cxx_destruct;
- (id)iconLabelWithColor:(id)a0;
- (id)iconLabelWithFontWeight:(double)a0;
- (id)initWithText:(id)a0 language:(id)a1 color:(id)a2 fontFamilyName:(id)a3 fontWeight:(double)a4;

@end
