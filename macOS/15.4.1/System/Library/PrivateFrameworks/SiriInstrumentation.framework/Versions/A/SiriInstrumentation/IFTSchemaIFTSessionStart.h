@class NSData;

@interface IFTSchemaIFTSessionStart : SISchemaInstrumentationMessage {
    struct { unsigned char originatingDeviceWasLocal : 1; } _has;
}

@property (nonatomic) BOOL originatingDeviceWasLocal;
@property (nonatomic) BOOL hasOriginatingDeviceWasLocal;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginatingDeviceWasLocal;
- (id)suppressMessageUnderConditions;

@end
