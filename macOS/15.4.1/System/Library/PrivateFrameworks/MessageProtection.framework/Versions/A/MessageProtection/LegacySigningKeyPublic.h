@interface LegacySigningKeyPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;

@end
