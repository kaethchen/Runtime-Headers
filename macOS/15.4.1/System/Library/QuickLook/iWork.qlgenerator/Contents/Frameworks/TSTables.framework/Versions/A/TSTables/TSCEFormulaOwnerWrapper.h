@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying> {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _ownerUID;
}

@property (readonly, nonatomic) const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *ownerUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormulaOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)isEqualToTSCEFormulaOwnerWrapper:(id)a0;

@end
