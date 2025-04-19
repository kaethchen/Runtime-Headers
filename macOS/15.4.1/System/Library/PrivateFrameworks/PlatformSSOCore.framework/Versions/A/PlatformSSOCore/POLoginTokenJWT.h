@class POLoginJWTBody;

@interface POLoginTokenJWT : POJWT

@property (retain) POLoginJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end
