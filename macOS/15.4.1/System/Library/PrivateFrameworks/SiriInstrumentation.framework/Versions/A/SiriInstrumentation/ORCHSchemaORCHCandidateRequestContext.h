@class ORCHSchemaORCHCandidateRequestCancelled, NSData, ORCHSchemaORCHCandidateRequestStarted;

@interface ORCHSchemaORCHCandidateRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteStarted;
- (id)suppressMessageUnderConditions;

@end
