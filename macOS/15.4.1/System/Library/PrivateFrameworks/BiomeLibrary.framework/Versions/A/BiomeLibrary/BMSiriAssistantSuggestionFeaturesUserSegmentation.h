@class NSString;

@interface BMSiriAssistantSuggestionFeaturesUserSegmentation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL is2x3;
@property (nonatomic) BOOL hasIs2x3;
@property (readonly, nonatomic) BOOL siriWasDisabled;
@property (nonatomic) BOOL hasSiriWasDisabled;
@property (readonly, nonatomic) BOOL siriWasdictationOnly;
@property (nonatomic) BOOL hasSiriWasdictationOnly;
@property (readonly, nonatomic) BOOL active6MonthsOrMoreAgo;
@property (nonatomic) BOOL hasActive6MonthsOrMoreAgo;
@property (readonly, nonatomic) BOOL active28To6MonthsDaysAgo;
@property (nonatomic) BOOL hasActive28To6MonthsDaysAgo;
@property (readonly, nonatomic) BOOL active14To28DaysAgo;
@property (nonatomic) BOOL hasActive14To28DaysAgo;
@property (readonly, nonatomic) BOOL active7To14DaysAgo;
@property (nonatomic) BOOL hasActive7To14DaysAgo;
@property (readonly, nonatomic) BOOL activeWithin7days;
@property (nonatomic) BOOL hasActiveWithin7days;
@property (readonly, nonatomic) BOOL activeWithin7days1Turn;
@property (nonatomic) BOOL hasActiveWithin7days1Turn;
@property (readonly, nonatomic) BOOL activeWithin7Days2To3Turns;
@property (nonatomic) BOOL hasActiveWithin7Days2To3Turns;
@property (readonly, nonatomic) BOOL activeWithin7Days4PlusTurns;
@property (nonatomic) BOOL hasActiveWithin7Days4PlusTurns;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithIs2x3:(id)a0 siriWasDisabled:(id)a1 siriWasdictationOnly:(id)a2 active6MonthsOrMoreAgo:(id)a3 active28To6MonthsDaysAgo:(id)a4 active14To28DaysAgo:(id)a5 active7To14DaysAgo:(id)a6 activeWithin7days:(id)a7 activeWithin7days1Turn:(id)a8 activeWithin7Days2To3Turns:(id)a9 activeWithin7Days4PlusTurns:(id)a10;

@end
