@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)publicKey;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)decryptData:(id)a0 error:(id *)a1;

@end
