@interface CNAvatarImageLoadingOptions : NSObject

@property double diameter;
@property long long backgroundStyle;
@property BOOL selected;
@property BOOL maskedByCircle;

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1 selected:(BOOL)a2 maskedByCircle:(BOOL)a3;

@end
