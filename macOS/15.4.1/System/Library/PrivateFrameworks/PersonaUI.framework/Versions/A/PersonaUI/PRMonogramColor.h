@class NSArray, NSBundle, NSString, NSColor;

@interface PRMonogramColor : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *availableColorNames;
@property (class, readonly, nonatomic) NSArray *availableColors;

@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSColor *gradientStartColor;
@property (retain, nonatomic) NSColor *gradientEndColor;
@property (retain, nonatomic) NSColor *selectedActiveColor;
@property (retain, nonatomic) NSColor *selectedInactiveColor;
@property (retain, nonatomic) NSColor *selectedActiveTextColor;
@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *colorName;

+ (id)colorWithName:(id)a0 inBundle:(id)a1;
+ (id)defaultBundle;
+ (id)defaultGradientEndColor;
+ (id)defaultGradientStartColor;
+ (id)defaultSelectedActiveColor;
+ (id)defaultSelectedActiveTextColor;
+ (id)defaultSelectedInactiveColor;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)gradientEndName:(id)a0;
+ (id)gradientStartColor:(id)a0;
+ (id)gradientStartName:(id)a0;
+ (id)monogramGradientColorNamed:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setColorName:(id)a0;
- (id)initWithColorName:(id)a0;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (id)initWithRandomColor;

@end
