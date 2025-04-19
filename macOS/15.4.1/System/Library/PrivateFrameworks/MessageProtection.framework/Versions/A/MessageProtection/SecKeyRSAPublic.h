@interface SecKeyRSAPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)encryptData:(id)a0 error:(id *)a1;
- (id)initWithSecKeyRef:(id)a0;

@end
