@class NSData;

@interface IFPlatformRequestSchemaIFPlatformRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char ifPlatformRequestTarget : 1; } _has;
}

@property (nonatomic) int ifPlatformRequestTarget;
@property (nonatomic) BOOL hasIfPlatformRequestTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIfPlatformRequestTarget;
- (id)suppressMessageUnderConditions;

@end
