@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end
