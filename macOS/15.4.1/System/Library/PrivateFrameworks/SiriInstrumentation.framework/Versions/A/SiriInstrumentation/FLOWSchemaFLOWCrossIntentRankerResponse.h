@class NSArray, NSData;

@interface FLOWSchemaFLOWCrossIntentRankerResponse : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers;
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCrossDomainRankerScoreKeeper:(id)a0;
- (void)addCrossIntentRankerScoreKeeper:(id)a0;
- (void)clearCrossDomainRankerScoreKeeper;
- (void)clearCrossIntentRankerScoreKeeper;
- (id)crossDomainRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;
- (id)suppressMessageUnderConditions;

@end
