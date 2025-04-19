@class SigningPublicKey;

@interface SigningKey : FullKey

@property (retain, nonatomic) SigningPublicKey *_publicKey;

- (id)description;
- (void).cxx_destruct;
- (id)publicKey;
- (id)signData:(id)a0 error:(id *)a1;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)tetraWrapped;

@end
