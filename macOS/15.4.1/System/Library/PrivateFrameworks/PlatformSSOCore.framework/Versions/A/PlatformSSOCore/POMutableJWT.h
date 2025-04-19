@class POMutableJWTHeader;
@protocol POMutableJWTBody;

@interface POMutableJWT : POJWT

@property (retain) id<POMutableJWTBody> body;
@property (retain) POMutableJWTHeader *header;

- (void).cxx_destruct;
- (void)setBodyData:(id)a0;
- (BOOL)isJWE;

@end
