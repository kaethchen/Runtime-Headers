@class NSString;

@interface BMMailCategorization : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int currMailbox;
@property (readonly, nonatomic) int prevMailbox;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSString *trialExperimentDeploymentId;
@property (readonly, nonatomic) NSString *trialExperimentTreatmentId;
@property (readonly, nonatomic) NSString *trialRolloutId;
@property (readonly, nonatomic) NSString *trialRolloutDeploymentId;
@property (readonly, nonatomic) NSString *trialRolloutFactorPackId;
@property (readonly, nonatomic) int predictedCategory;
@property (readonly, nonatomic) NSString *blackPearlModelVersion;
@property (readonly, nonatomic) NSString *blackPearlSenderModelVersion;
@property (readonly, nonatomic) NSString *blackPearlFinalRuleVersion;
@property (readonly, nonatomic) NSString *blackPearlBreakthroughVersion;
@property (readonly, nonatomic) NSString *reasonCodes;
@property (readonly, nonatomic) int currCategoryView;
@property (readonly, nonatomic) int prevCategoryView;
@property (readonly, nonatomic) BOOL isBreakthrough;
@property (nonatomic) BOOL hasIsBreakthrough;
@property (readonly, nonatomic) BOOL isBlackPearlEnabled;
@property (nonatomic) BOOL hasIsBlackPearlEnabled;
@property (readonly, nonatomic) NSString *elapsedTimeSinceEmailReceived;
@property (readonly, nonatomic) int recategorizationBy;
@property (readonly, nonatomic) BOOL isThread;
@property (nonatomic) BOOL hasIsThread;
@property (readonly, nonatomic) NSString *senderId;
@property (readonly, nonatomic) int receivingAccountDomain;
@property (readonly, nonatomic) BOOL hasIcloudAccountEnabled;
@property (nonatomic) BOOL hasHasIcloudAccountEnabled;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithMessageId:(id)a0 eventType:(id)a1 trialExperimentId:(id)a2 trialExperimentDeploymentId:(id)a3 trialExperimentTreatmentId:(id)a4 trialRolloutId:(id)a5 trialRolloutDeploymentId:(id)a6 trialRolloutFactorPackId:(id)a7 predictedCategory:(int)a8 blackPearlModelVersion:(id)a9 blackPearlSenderModelVersion:(id)a10 blackPearlFinalRuleVersion:(id)a11 blackPearlBreakthroughVersion:(id)a12 reasonCodes:(id)a13 currCategoryView:(int)a14 prevCategoryView:(int)a15 isBreakthrough:(id)a16 isBlackPearlEnabled:(id)a17 elapsedTimeSinceEmailReceived:(id)a18 recategorizationBy:(int)a19 isThread:(id)a20 senderId:(id)a21 receivingAccountDomain:(int)a22 hasIcloudAccountEnabled:(id)a23;
- (id)initWithMessageId:(id)a0 eventType:(id)a1 trialExperimentId:(id)a2 trialExperimentDeploymentId:(id)a3 trialExperimentTreatmentId:(id)a4 trialRolloutId:(id)a5 trialRolloutDeploymentId:(id)a6 trialRolloutFactorPackId:(id)a7 predictedCategory:(int)a8 blackPearlModelVersion:(id)a9 blackPearlSenderModelVersion:(id)a10 blackPearlFinalRuleVersion:(id)a11 blackPearlBreakthroughVersion:(id)a12 reasonCodes:(id)a13 currMailbox:(int)a14 prevMailbox:(int)a15 isBreakthrough:(id)a16 isBlackPearlEnabled:(id)a17 elapsedTimeSinceEmailReceived:(id)a18 recategorizationBy:(int)a19 isThread:(id)a20;

@end
