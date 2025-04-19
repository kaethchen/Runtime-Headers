@class NSString, BMMLSEShareSheetFeedbackTrialIdentifier, NSArray;

@interface BMMLSEShareSheetFeedback : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int engagementType;
@property (readonly, nonatomic) NSString *engagementIdentifier;
@property (readonly, nonatomic) unsigned int visiblePeopleSuggestionCount;
@property (nonatomic) BOOL hasVisiblePeopleSuggestionCount;
@property (readonly, nonatomic) unsigned int visibleAppSuggestionCount;
@property (nonatomic) BOOL hasVisibleAppSuggestionCount;
@property (readonly, nonatomic) BOOL airdropPeopleSuggestionShown;
@property (nonatomic) BOOL hasAirdropPeopleSuggestionShown;
@property (readonly, nonatomic) int inferenceSource;
@property (readonly, nonatomic) BMMLSEShareSheetFeedbackTrialIdentifier *trialIdentifier;
@property (readonly, nonatomic) NSArray *timeouts;
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
- (id)_timeoutsJSONArray;
- (id)initWithIdentifier:(id)a0 engagementType:(int)a1 engagementIdentifier:(id)a2 visiblePeopleSuggestionCount:(id)a3 visibleAppSuggestionCount:(id)a4 airdropPeopleSuggestionShown:(id)a5 inferenceSource:(int)a6;
- (id)initWithIdentifier:(id)a0 engagementType:(int)a1 engagementIdentifier:(id)a2 visiblePeopleSuggestionCount:(id)a3 visibleAppSuggestionCount:(id)a4 airdropPeopleSuggestionShown:(id)a5 inferenceSource:(int)a6 trialIdentifier:(id)a7;
- (id)initWithIdentifier:(id)a0 engagementType:(int)a1 engagementIdentifier:(id)a2 visiblePeopleSuggestionCount:(id)a3 visibleAppSuggestionCount:(id)a4 airdropPeopleSuggestionShown:(id)a5 inferenceSource:(int)a6 trialIdentifier:(id)a7 timeouts:(id)a8;

@end
