@class TSCEErrorValue;

@interface TSCEErrorCellValue : TSCECellValue {
    TSCEErrorValue *_errorValue;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)format;
- (id)displayString;
- (id)errorValue;
- (void)encodeToArchive:(void *)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (id)initWithErrorValue:(id)a0 locale:(id)a1;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)tsceValue;

@end
