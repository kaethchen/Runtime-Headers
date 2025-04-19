@class NSData;

@interface CKAsn1SetToken : CKAsn1Token {
    NSData *mReadData;
}

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)nextToken;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 data:(id)a2 opaque:(BOOL)a3;

@end
