@class NSString, PKArchive;

@interface PKSecureNetEnabledProduct : PKNetEnabledProduct {
    PKArchive *_distArchive;
    NSString *_archivePath;
    NSString *_tempArchivePath;
}

+ (id)productInfoFilename;

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (id)productType;
- (id)_archiveForTrustEvaluation;
- (id)_distributionArchivePath;
- (id)_distributionArchiveWriteURL;
- (BOOL)_isDistributionArchiveInProductOnDisk:(id)a0;
- (BOOL)_populateWithDistributionArchiveReturningError:(id *)a0;
- (BOOL)didReceiveData:(id)a0 fromDistributionURL:(id)a1 error:(id *)a2;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;

@end
