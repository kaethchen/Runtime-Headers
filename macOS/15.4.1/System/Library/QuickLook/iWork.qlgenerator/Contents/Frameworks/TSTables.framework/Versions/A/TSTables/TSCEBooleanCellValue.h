@class TSCEBooleanValue;

@interface TSCEBooleanCellValue : TSCECellValue {
    TSCEBooleanValue *_booleanValue;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)booleanValue;
- (id)format;
- (id)displayString;
- (void)encodeToArchive:(void *)a0;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithBoolean:(BOOL)a0 locale:(id)a1;
- (id)initWithBooleanValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
