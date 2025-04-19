@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEPrivatizedHistoryStats : SISchemaInstrumentationMessage {
    struct { unsigned char recency : 1; } _has;
}

@property (nonatomic) unsigned int recency;
@property (nonatomic) BOOL hasRecency;
@property (copy, nonatomic) NSArray *frequencies;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addFrequencies:(unsigned int)a0;
- (void)clearFrequencies;
- (void)deleteFrequencies;
- (void)deleteRecency;
- (unsigned int)frequenciesAtIndex:(unsigned long long)a0;
- (unsigned long long)frequenciesCount;
- (id)suppressMessageUnderConditions;

@end
