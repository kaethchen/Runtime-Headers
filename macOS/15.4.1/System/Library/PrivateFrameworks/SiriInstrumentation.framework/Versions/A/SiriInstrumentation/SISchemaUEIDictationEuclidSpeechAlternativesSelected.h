@class NSData;

@interface SISchemaUEIDictationEuclidSpeechAlternativesSelected : SISchemaInstrumentationMessage {
    struct { unsigned char speechAlternativesType : 1; unsigned char alternativesIndexSelectedByUser : 1; } _has;
}

@property (nonatomic) int speechAlternativesType;
@property (nonatomic) BOOL hasSpeechAlternativesType;
@property (nonatomic) long long alternativesIndexSelectedByUser;
@property (nonatomic) BOOL hasAlternativesIndexSelectedByUser;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlternativesIndexSelectedByUser;
- (void)deleteSpeechAlternativesType;
- (id)suppressMessageUnderConditions;

@end
