@interface MADFaceDetectionResource : VCPMADVisionResource

+ (id)sharedResource;

- (long long)activeCost;
- (long long)inactiveCost;

@end
