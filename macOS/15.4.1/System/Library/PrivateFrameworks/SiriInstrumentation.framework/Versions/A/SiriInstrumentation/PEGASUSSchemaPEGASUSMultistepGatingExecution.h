@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMultistepGatingExecution : SISchemaInstrumentationMessage {
    struct { unsigned char loopbackDepth : 1; } _has;
}

@property (nonatomic) int loopbackDepth;
@property (nonatomic) BOOL hasLoopbackDepth;
@property (copy, nonatomic) NSArray *domains;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (int)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(int)a0;
- (void)deleteDomains;
- (void)deleteLoopbackDepth;
- (id)suppressMessageUnderConditions;

@end
