@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)publicKey;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)signData:(id)a0 error:(id *)a1;

@end
