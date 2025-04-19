@class NSNumber, NSString, NSArray, NSMutableSet, IASignalAnalyticsObject, NSDate, NSMutableArray;

@interface IASSmartReplyAnalyzerCache : NSObject

@property (retain, nonatomic) NSMutableSet *featureModel;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) IASignalAnalyticsObject *intentRequestedCache;
@property (nonatomic) unsigned long long lastEdgeDetectionState;
@property (retain, nonatomic) NSArray *intents;
@property (nonatomic) BOOL isCached;
@property (copy, nonatomic) NSString *originalContent;
@property (retain, nonatomic) NSDate *modelStartTime;
@property (nonatomic) double totalModelRuntime;
@property (retain, nonatomic) NSDate *initialResponseModelStartTime;
@property (retain, nonatomic) NSDate *initialResponseModelStopTime;
@property (retain, nonatomic) NSDate *questionnaireModelStartTime;
@property (retain, nonatomic) NSDate *questionnaireModelStopTime;
@property (retain, nonatomic) NSDate *rewriteModelStartTime;
@property (nonatomic) double totalRewriteModelRuntime;
@property (nonatomic) BOOL questionnaireRequestedSignalSeen;
@property (nonatomic) BOOL questionnaireNotShownSignalSeen;
@property (retain, nonatomic) NSMutableArray *cachedQuestionsOptionsAnswers;
@property (nonatomic) unsigned long long numUncompletedQuestionnaireModifications;
@property (nonatomic) BOOL initialResponseCompletedSignalSeen;
@property (copy, nonatomic) NSString *cachedGeneratedContentString;
@property (nonatomic) unsigned long long sentUsingSmartReplies;
@property (copy, nonatomic) NSNumber *inputTokenCount;
@property (copy, nonatomic) NSNumber *outputTokenCount;

- (id)init;
- (void).cxx_destruct;

@end
