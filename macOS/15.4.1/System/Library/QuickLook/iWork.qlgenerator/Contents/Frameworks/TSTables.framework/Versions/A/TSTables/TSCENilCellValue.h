@interface TSCENilCellValue : TSCECellValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)format;
- (id)displayString;
- (long long)compareToCellValue:(id)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
