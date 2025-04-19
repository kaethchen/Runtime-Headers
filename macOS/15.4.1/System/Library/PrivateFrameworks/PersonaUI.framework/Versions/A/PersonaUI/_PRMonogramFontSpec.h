@class NSString;

@interface _PRMonogramFontSpec : NSObject

@property (readonly) NSString *fontName;
@property (readonly) double baseSize;
@property (readonly) double tracking;

+ (id)specForFontWithName:(id)a0 baseSize:(double)a1 tracking:(double)a2;

- (void).cxx_destruct;

@end
