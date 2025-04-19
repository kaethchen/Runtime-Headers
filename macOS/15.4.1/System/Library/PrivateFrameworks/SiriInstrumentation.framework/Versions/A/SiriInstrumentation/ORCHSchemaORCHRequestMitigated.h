@class NSData;

@interface ORCHSchemaORCHRequestMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationSource : 1; } _has;
}

@property (nonatomic) int mitigationSource;
@property (nonatomic) BOOL hasMitigationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMitigationSource;
- (id)suppressMessageUnderConditions;

@end
