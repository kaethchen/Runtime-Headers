@class TSULocale;

@interface TSCECellValue : NSObject <NSCopying>

@property (nonatomic) char valueType;
@property (retain, nonatomic) TSULocale *locale;

+ (id)cellValueWithArchive:(const void *)a0 locale:(id)a1;
+ (id)newCellValueFromTSCEValue:(id)a0 withLocale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)format;
- (id)displayString;
- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)a0;
- (void)encodeCellValueToArchive:(void *)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)tsceValue;
- (void)updateWithCustomFormatList:(id)a0;

@end
