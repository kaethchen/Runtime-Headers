@class NSString, NSData;

@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {
    struct { unsigned char speechTranscriptionType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
@property (nonatomic) int speechTranscriptionType;
@property (nonatomic) BOOL hasSpeechTranscriptionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceID;
- (void)deleteSpeechTranscriptionType;
- (id)suppressMessageUnderConditions;

@end
