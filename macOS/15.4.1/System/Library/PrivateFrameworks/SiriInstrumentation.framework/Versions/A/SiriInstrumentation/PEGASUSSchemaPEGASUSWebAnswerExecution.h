@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerExecution : SISchemaInstrumentationMessage {
    struct { unsigned char answerType : 1; unsigned char allowListType : 1; unsigned char fuzzyMatchType : 1; unsigned char subDomain : 1; unsigned char quality : 1; unsigned char answerClass : 1; unsigned char numHighlights : 1; unsigned char numCallouts : 1; unsigned char numLinkedCallouts : 1; } _has;
}

@property (nonatomic) unsigned int answerType;
@property (nonatomic) BOOL hasAnswerType;
@property (nonatomic) unsigned int allowListType;
@property (nonatomic) BOOL hasAllowListType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) BOOL hasFuzzyMatchType;
@property (nonatomic) unsigned int subDomain;
@property (nonatomic) BOOL hasSubDomain;
@property (nonatomic) unsigned int quality;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) BOOL hasAnswerClass;
@property (nonatomic) unsigned int numHighlights;
@property (nonatomic) BOOL hasNumHighlights;
@property (nonatomic) unsigned int numCallouts;
@property (nonatomic) BOOL hasNumCallouts;
@property (nonatomic) unsigned int numLinkedCallouts;
@property (nonatomic) BOOL hasNumLinkedCallouts;
@property (copy, nonatomic) NSArray *contentAgeInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSubDomain;
- (void)addContentAgeInSeconds:(unsigned int)a0;
- (void)clearContentAgeInSeconds;
- (unsigned int)contentAgeInSecondsAtIndex:(unsigned long long)a0;
- (unsigned long long)contentAgeInSecondsCount;
- (void)deleteAllowListType;
- (void)deleteAnswerClass;
- (void)deleteAnswerType;
- (void)deleteContentAgeInSeconds;
- (void)deleteFuzzyMatchType;
- (void)deleteNumCallouts;
- (void)deleteNumHighlights;
- (void)deleteNumLinkedCallouts;
- (void)deleteQuality;
- (id)suppressMessageUnderConditions;

@end
