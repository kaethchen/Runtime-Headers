@class MRE, NSString, SHCustomCatalog;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (readonly) MRE *mre;
@property (readonly) SHCustomCatalog *customCatalog;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)matchSignature:(id)a0;
- (id)MRESignaturesFromMatches:(id)a0;
- (void)stopRecognition;
- (long long)algorithmToMREAlgorithm:(long long)a0;
- (id)initWithCustomCatalog:(id)a0;
- (id)matchFromMREResults:(id)a0 signature:(id)a1;
- (id)matcherResponseFrom:(id)a0 querySignature:(id)a1 error:(id)a2;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;

@end
