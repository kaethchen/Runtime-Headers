@interface ContextualSpanMatcherSELFLogging : NSObject

+ (id)createContextualSpanMatcherEndedEvent:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createContextualSpanMatcherEndedTier1Event:(id)a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitContextualSpanMatcherEndedEventWithResponse:(id)a0 WithNlId:(id)a1 andWithTrpId:(id)a2 andWithRequestId:(id)a3 andWithResultCandidateId:(id)a4 andWithRequester:(int)a5;
+ (BOOL)emitEvent:(id)a0;

@end
