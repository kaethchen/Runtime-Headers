@class NSArray, NSColor, NSString;

@interface ICCalculateHighlightAttribute : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *errors;
@property (readonly, copy, nonatomic) NSColor *color;
@property (readonly, nonatomic) long long underlineStyle;
@property (readonly, copy, nonatomic) NSColor *underlineColor;
@property (readonly, copy, nonatomic) NSString *tooltip;
@property (readonly, copy, nonatomic) NSArray *suggestions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
