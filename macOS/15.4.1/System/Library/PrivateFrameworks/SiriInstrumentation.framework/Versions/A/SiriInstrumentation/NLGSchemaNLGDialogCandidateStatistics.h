@class NSData;

@interface NLGSchemaNLGDialogCandidateStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (id)suppressMessageUnderConditions;

@end
