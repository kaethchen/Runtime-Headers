@class CSUCoreMLInference, NSString, CSUSmileySpotterConfiguration;

@interface CSUSmileySpotter : NSObject {
    CSUCoreMLInference *_smileySpotterHead;
    NSString *_assetVersionNumber;
}

@property (retain) CSUSmileySpotterConfiguration *configuration;
@property (readonly, nonatomic) long long baseModelRevision;

+ (id)availableSmileySpotterRevisionsForTextEncoder:(long long)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (BOOL)loadModelCatalogResourcesWithAssetLock:(id)a0 Error:(id *)a1;
- (BOOL)loadResourcesInternal:(id *)a0;
- (BOOL)reLoadResources:(id *)a0;
- (id)runSmileySpotterOnTextEncoding:(id)a0 error:(id *)a1;
- (id)unsafeRunSmileySpotterOnTextEncoding:(id)a0 error:(id *)a1;

@end
