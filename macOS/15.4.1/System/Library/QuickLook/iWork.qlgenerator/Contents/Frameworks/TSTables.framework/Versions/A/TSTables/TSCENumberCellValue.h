@class TSCENumberValue;

@interface TSCENumberCellValue : TSCECellValue {
    TSCENumberValue *_numberValue;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)format;
- (id)displayString;
- (id)numberValue;
- (void)encodeToArchive:(void *)a0;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithDecimal:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 locale:(id)a1;
- (id)initWithDouble:(double)a0 locale:(id)a1;
- (id)initWithNumberValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)tsceValue;

@end
