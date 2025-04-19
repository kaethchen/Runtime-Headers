@class NSSet, NSData;

@interface AluminiumAuthenticator : NSObject {
    NSData *_key;
}

@property (copy, nonatomic) NSSet *defaultIncludedHeaders;
@property (nonatomic) unsigned int defaultAlgorithm;

+ (id)_defaultIncludedHeaders;

- (void).cxx_destruct;
- (BOOL)addAuthenticationHeadersToRequest:(id)a0 error:(id *)a1;
- (BOOL)addAuthenticationHeadersToRequest:(id)a0 includedHeaders:(id)a1 body:(id)a2 algorithm:(unsigned int)a3 error:(id *)a4;
- (id)initWithASCIIEncodedKey:(id)a0;
- (id)initWithHexEncodedKey:(id)a0;
- (BOOL)verifyAuthenticationWithRequest:(struct __CFHTTPMessage { } *)a0 error:(id *)a1;
- (BOOL)verifyAuthenticationWithRequest:(struct __CFHTTPMessage { } *)a0 includedHeaders:(id)a1 algorithm:(unsigned int)a2 error:(id *)a3;

@end
