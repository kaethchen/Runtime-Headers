@class NSData;

@interface STSchemaSTDisambiguationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationDetected : 1; unsigned char isQuestionQuery : 1; unsigned char isOpenQuery : 1; unsigned char numOfResults : 1; unsigned char isContentSearch : 1; } _has;
}

@property (nonatomic) BOOL disambiguationDetected;
@property (nonatomic) BOOL hasDisambiguationDetected;
@property (nonatomic) BOOL isQuestionQuery;
@property (nonatomic) BOOL hasIsQuestionQuery;
@property (nonatomic) BOOL isOpenQuery;
@property (nonatomic) BOOL hasIsOpenQuery;
@property (nonatomic) unsigned int numOfResults;
@property (nonatomic) BOOL hasNumOfResults;
@property (nonatomic) BOOL isContentSearch;
@property (nonatomic) BOOL hasIsContentSearch;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDisambiguationDetected;
- (void)deleteIsContentSearch;
- (void)deleteIsOpenQuery;
- (void)deleteIsQuestionQuery;
- (void)deleteNumOfResults;
- (id)suppressMessageUnderConditions;

@end
