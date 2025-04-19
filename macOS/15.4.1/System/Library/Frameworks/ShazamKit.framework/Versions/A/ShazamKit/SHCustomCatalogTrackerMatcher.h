@class SHCustomCatalogConfiguration, NSString;
@protocol SHCustomCatalogContainer, SHMatcherDelegate;

@interface SHCustomCatalogTrackerMatcher : NSObject <SHMatcher>

@property (readonly) SHCustomCatalogConfiguration *customCatalogConfiguration;
@property (readonly) id<SHCustomCatalogContainer> container;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopRecognition;
- (id)initWithCustomCatalogConfiguration:(id)a0 container:(id)a1;
- (id)matchFromMREResults:(id)a0 signature:(id)a1 signatureAlignments:(id)a2;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1;

@end
