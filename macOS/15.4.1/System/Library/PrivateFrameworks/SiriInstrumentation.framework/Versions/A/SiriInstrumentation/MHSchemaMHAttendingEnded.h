@class NSData;

@interface MHSchemaMHAttendingEnded : SISchemaInstrumentationMessage {
    struct { unsigned char endReason : 1; } _has;
}

@property (nonatomic) int endReason;
@property (nonatomic) BOOL hasEndReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndReason;
- (id)suppressMessageUnderConditions;

@end
