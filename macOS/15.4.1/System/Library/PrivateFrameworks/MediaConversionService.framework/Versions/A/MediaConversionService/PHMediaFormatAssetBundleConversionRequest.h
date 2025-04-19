@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (void).cxx_destruct;
- (id)outputFileType;
- (id)outputPathExtension;
- (BOOL)prepareWithError:(id *)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;

@end
