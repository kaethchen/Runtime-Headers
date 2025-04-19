@interface CKAsn1IntegerToken : CKAsn1Token

@property (readonly) unsigned long long value;

- (id)description;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 data:(id)a2 opaque:(BOOL)a3;

@end
