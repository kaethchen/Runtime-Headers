@class NSData;

@interface QDSchemaQDToolboxSizeReported : SISchemaInstrumentationMessage {
    struct { unsigned char totalToolCount : 1; } _has;
}

@property (nonatomic) unsigned int totalToolCount;
@property (nonatomic) BOOL hasTotalToolCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTotalToolCount;
- (id)suppressMessageUnderConditions;

@end
