@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end
