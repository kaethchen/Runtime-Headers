@class SigningPublicKey;

@interface TetraPublicSigningKeyWrapper : NSObject

@property (retain) SigningPublicKey *signingKey;

- (void).cxx_destruct;
- (id)lookupIdentifier;
- (id)compactRepresentation;
- (id)initWithCompactRepresentation:(id)a0;
- (id)initWithSigningPublicKey:(id)a0;
- (BOOL)verifyTetraMessageSignature:(id)a0 formatter:(id)a1;
- (BOOL)verifyTetraRegistrationSignature:(id)a0 formatter:(id)a1;

@end
