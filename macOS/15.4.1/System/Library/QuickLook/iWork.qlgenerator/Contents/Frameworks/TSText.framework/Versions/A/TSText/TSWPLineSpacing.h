@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>

@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) double amount;
@property (readonly, nonatomic) double baselineRule;

+ (id)lineSpacing;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithMode:(int)a0 amount:(double)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithMode:(int)a0 amount:(double)a1 baselineRule:(double)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithLocalizationDictionary:(id)a0;

@end
