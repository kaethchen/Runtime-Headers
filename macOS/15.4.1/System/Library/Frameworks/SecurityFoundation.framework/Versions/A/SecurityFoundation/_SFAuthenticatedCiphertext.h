@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {
    id _authenticatedCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCiphertext:(id)a0 authenticationCode:(id)a1 initializationVector:(id)a2;

@end
