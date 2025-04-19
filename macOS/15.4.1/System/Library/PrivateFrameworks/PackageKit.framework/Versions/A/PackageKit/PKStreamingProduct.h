@class PKStreamingXARArchive, PKProduct, NSString;

@interface PKStreamingProduct : PKProduct {
    PKProduct *_underlyingProduct;
    PKStreamingXARArchive *_archive;
    NSString *_path;
}

@property unsigned long long state;

+ (BOOL)canInitWithURL:(id)a0;

- (void)dealloc;
- (id)URL;
- (id)distribution;
- (id)productVersion;
- (void)finishStreamWithCompletionBlock:(id /* block */)a0;
- (void)supplyBytes:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)suspendStreamWithCompletionBlock:(id /* block */)a0;
- (id)productType;
- (id)productIdentifier;
- (id)allPackageReferences;
- (BOOL)evaluateTrustReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (void)setMinimumRequiredTrustLevel:(int)a0;
- (int)trustLevelReturningCertificateChain:(id *)a0;
- (id)_archiveForTrustEvaluation;
- (BOOL)_isProductLoaded;
- (void)_throwExceptionIfResourceNotLoaded:(id)a0;
- (void)_updateCurrentArchiveStateWithError:(id)a0;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2 resumptionOffset:(unsigned long long *)a3 error:(id *)a4;
- (id)initWithPath:(id)a0 resumptionOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)resourceDataForKey:(id)a0 returningMIMEType:(id *)a1 returningUTI:(id *)a2;
- (id)stringsDictionary;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)a0;

@end
