@class NSData;

@interface SISchemaDictationEndPointStop : SISchemaInstrumentationMessage {
    struct { unsigned char dictationEndPointType : 1; } _has;
}

@property (nonatomic) int dictationEndPointType;
@property (nonatomic) BOOL hasDictationEndPointType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDictationEndPointType;
- (id)suppressMessageUnderConditions;

@end
