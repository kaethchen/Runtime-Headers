@class PKArchive, PKDistribution;

@interface PKFolderArchiveProduct : PKProduct {
    PKArchive *_archive;
    PKDistribution *_distribution;
}

+ (BOOL)canInitWithURL:(id)a0;

- (void)dealloc;
- (id)URL;
- (id)distribution;
- (id)productType;
- (id)allPackageReferences;
- (BOOL)evaluateTrustReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)_archiveForTrustEvaluation;
- (id)_distributionDataFromArchive:(id)a0 returningDistributionURL:(id *)a1 error:(id *)a2;
- (id)_initWithPath:(id)a0 error:(id *)a1;
- (id)_synthesizedDistributionFromMetaPackageInArchive:(id)a0;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)stringsDictionary;

@end
