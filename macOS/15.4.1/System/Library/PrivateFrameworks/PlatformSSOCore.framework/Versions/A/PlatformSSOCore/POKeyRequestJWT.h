@class POKeyRequestJWTBody;

@interface POKeyRequestJWT : POJWT

@property (retain) POKeyRequestJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end
