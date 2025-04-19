@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end
