@interface CKAtomMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (id)timestamp;
- (id)location;
- (void)setValue:(id)a0;
- (void)setVersion:(unsigned long long)a0;
- (id)references;
- (void)assignTimestampFromProxy:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)setAtomBehavior:(unsigned char)a0;
- (void)setAtomType:(unsigned long long)a0;
- (void)setValueBytes:(void *)a0 length:(unsigned long long)a1;

@end
