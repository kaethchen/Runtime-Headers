@class NSString;

@interface BMSiriAssistantSuggestionFeaturesEngagementLabels : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL wasSpoken;
@property (nonatomic) BOOL hasWasSpoken;
@property (readonly, nonatomic) BOOL wasTapped;
@property (nonatomic) BOOL hasWasTapped;
@property (readonly, nonatomic) long long dwellTime;
@property (nonatomic) BOOL hasDwellTime;
@property (readonly, nonatomic) BOOL otherSuggestionTapped;
@property (nonatomic) BOOL hasOtherSuggestionTapped;
@property (readonly, nonatomic) BOOL otherSuggestionSpoken;
@property (nonatomic) BOOL hasOtherSuggestionSpoken;
@property (readonly, nonatomic) int position;
@property (nonatomic) BOOL hasPosition;
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
- (id)initWithWasSpoken:(id)a0 wasTapped:(id)a1 dwellTime:(id)a2;
- (id)initWithWasSpoken:(id)a0 wasTapped:(id)a1 dwellTime:(id)a2 otherSuggestionTapped:(id)a3 otherSuggestionSpoken:(id)a4 position:(id)a5;

@end
