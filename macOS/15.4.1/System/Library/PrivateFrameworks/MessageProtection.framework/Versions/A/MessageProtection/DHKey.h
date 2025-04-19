@interface DHKey : FullKey

- (id)description;
- (id)publicKey;
- (id)keyAgreementWithPublicKey:(id)a0 error:(id *)a1;

@end
