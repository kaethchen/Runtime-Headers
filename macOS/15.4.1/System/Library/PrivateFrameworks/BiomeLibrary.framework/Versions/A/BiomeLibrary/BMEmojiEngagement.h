@class NSString;

@interface BMEmojiEngagement : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *emoji;
@property (readonly, nonatomic) BOOL wasPositiveEngagement;
@property (nonatomic) BOOL hasWasPositiveEngagement;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) int inputMode;
@property (readonly, nonatomic) NSString *replacementContext;
@property (readonly, nonatomic) int resultPosition;
@property (nonatomic) BOOL hasResultPosition;
@property (readonly, nonatomic) int numberSearchQueriesRun;
@property (nonatomic) BOOL hasNumberSearchQueriesRun;
@property (readonly, nonatomic) NSString *finalSearchQuery;
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
- (id)initWithEmoji:(id)a0 wasPositiveEngagement:(id)a1 localeIdentifier:(id)a2 inputMode:(int)a3 replacementContext:(id)a4 resultPosition:(id)a5 numberSearchQueriesRun:(id)a6 finalSearchQuery:(id)a7;
- (id)initByReadFrom:(id)a0;

@end
