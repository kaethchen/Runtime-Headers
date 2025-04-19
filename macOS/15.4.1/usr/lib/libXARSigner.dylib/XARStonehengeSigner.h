@class NSArray, NSString, NSURL, NSData;

@interface XARStonehengeSigner : NSObject

@property (retain, nonatomic) NSURL *inputXarFileURL;
@property (retain, nonatomic) NSURL *outputXarFileURL;
@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *digestToSign;
@property (readonly) NSString *signingKey;
@property (readonly) long long digestType;

+ (id)validKeys;

- (id)init;
- (void).cxx_destruct;
- (BOOL)signArchiveUsingComputedDigest:(id *)a0;
- (id)_cmsSigToDer:(id)a0;
- (id)_rsaServerFormatToData:(id)a0;
- (void)authenticateUsingAPIKey:(id)a0 withAPISecret:(id)a1;
- (void)authenticateUsingSSOToken;
- (id)fetchSigningCertificateAndComputeDigestWithError:(id *)a0;
- (id)initWithXARFileURL:(id)a0 withSignedXAROutputURL:(id)a1 withSigningKey:(id)a2 withDigestType:(long long)a3 withError:(id *)a4;

@end
