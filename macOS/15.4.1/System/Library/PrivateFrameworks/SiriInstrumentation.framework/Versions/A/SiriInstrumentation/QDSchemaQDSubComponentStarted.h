@class NSData;

@interface QDSchemaQDSubComponentStarted : SISchemaInstrumentationMessage {
    struct { unsigned char subComponent : 1; } _has;
}

@property (nonatomic) int subComponent;
@property (nonatomic) BOOL hasSubComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSubComponent;
- (id)suppressMessageUnderConditions;

@end
