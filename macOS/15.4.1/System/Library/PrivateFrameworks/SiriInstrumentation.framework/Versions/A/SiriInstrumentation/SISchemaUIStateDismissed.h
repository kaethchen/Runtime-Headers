@class NSData;

@interface SISchemaUIStateDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char dismissalReason : 1; } _has;
}

@property (nonatomic) int dismissalReason;
@property (nonatomic) BOOL hasDismissalReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDismissalReason;
- (id)suppressMessageUnderConditions;

@end
