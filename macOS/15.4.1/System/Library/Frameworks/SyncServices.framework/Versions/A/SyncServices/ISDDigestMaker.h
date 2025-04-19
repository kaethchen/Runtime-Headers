@interface ISDDigestMaker : NSObject

+ (id)sharedDigestMaker;

- (id)computeBase64DigestForData:(id)a0 useMD4:(BOOL)a1;
- (id)computeDigestForData:(id)a0;
- (id)computeDigestForFile:(id)a0;
- (id)computeMD4DigestForData:(id)a0;
- (id)computeSHA1DigestForData:(id)a0;

@end
