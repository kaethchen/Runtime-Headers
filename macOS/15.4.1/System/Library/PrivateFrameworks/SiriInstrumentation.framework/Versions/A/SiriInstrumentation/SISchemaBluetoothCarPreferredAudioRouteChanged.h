@class NSData;

@interface SISchemaBluetoothCarPreferredAudioRouteChanged : SISchemaInstrumentationMessage {
    struct { unsigned char before : 1; unsigned char after : 1; } _has;
}

@property (nonatomic) int before;
@property (nonatomic) BOOL hasBefore;
@property (nonatomic) int after;
@property (nonatomic) BOOL hasAfter;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAfter;
- (void)deleteBefore;
- (id)suppressMessageUnderConditions;

@end
