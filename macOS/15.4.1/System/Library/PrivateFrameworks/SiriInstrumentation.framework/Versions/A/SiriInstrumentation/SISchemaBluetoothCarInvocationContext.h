@class NSData;

@interface SISchemaBluetoothCarInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char route : 1; } _has;
}

@property (nonatomic) int route;
@property (nonatomic) BOOL hasRoute;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRoute;
- (id)suppressMessageUnderConditions;

@end
