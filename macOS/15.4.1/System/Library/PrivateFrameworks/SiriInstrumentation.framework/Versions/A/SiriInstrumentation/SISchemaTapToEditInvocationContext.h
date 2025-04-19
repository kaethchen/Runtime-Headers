@class NSData;

@interface SISchemaTapToEditInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isTranscriptEdited : 1; } _has;
}

@property (nonatomic) BOOL isTranscriptEdited;
@property (nonatomic) BOOL hasIsTranscriptEdited;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTranscriptEdited;
- (id)suppressMessageUnderConditions;

@end
