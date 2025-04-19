@class NSArray;

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (BOOL)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
