@class SigningKey;

@interface TetraSigningKeyWrapper : NSObject

@property (retain) SigningKey *signingKey;

+ (id)generateKeyForTesting;

- (void).cxx_destruct;
- (id)publicKey;
- (id)initWithSigningKey:(id)a0;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)signDataWithMessageFormatter:(id)a0 error:(id *)a1;
- (id)signDataWithRegistrationFormatter:(id)a0 error:(id *)a1;

@end
