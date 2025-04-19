@class NSData;

@interface ASRSchemaASRLMEOverActivationEdit : SISchemaInstrumentationMessage {
    struct { unsigned char speechProfileCategory : 1; } _has;
}

@property (nonatomic) int speechProfileCategory;
@property (nonatomic) BOOL hasSpeechProfileCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSpeechProfileCategory;
- (id)suppressMessageUnderConditions;

@end
