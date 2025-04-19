@interface SigningPublicKey : PublicKey

- (id)description;
- (id)tetraWrapped;
- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;

@end
