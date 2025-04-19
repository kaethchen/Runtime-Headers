@class NSDictionary, NSString;

@interface ResponsiveDesignPresetConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *portraitImageName;
@property (copy, nonatomic) NSString *landscapeImageName;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL rotated;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) unsigned long long pixelRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } browserSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rotatedBrowserSize;
@property (retain, nonatomic) ResponsiveDesignPresetConfiguration *nextConfiguration;

+ (id)freeFormPresetConfiguration;
+ (id)keyPathsForValuesAffectingRotatedBrowserSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isSimilar:(id)a0;

@end
