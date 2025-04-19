@interface EFMutableByteSet : EFByteSet

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invert;
- (void)addBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
