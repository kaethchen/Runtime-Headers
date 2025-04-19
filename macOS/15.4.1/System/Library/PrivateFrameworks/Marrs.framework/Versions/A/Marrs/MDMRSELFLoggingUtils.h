@interface MDMRSELFLoggingUtils : NSObject

+ (BOOL)emitMentionDetectorEvaluatedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithRequestId:(id)a3 andWithResultCandidateId:(id)a4 andWithRequester:(int)a5;
+ (BOOL)emitMentionResolverEvaluatedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithRequestId:(id)a3 andWithResultCandidateId:(id)a4 andWithRequester:(int)a5;
+ (id)createMentionDetectorEvaluatedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionDetectorEvaluatedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionResolverEvaluatedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createMentionResolverEvaluatedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitEvent:(id)a0;

@end
