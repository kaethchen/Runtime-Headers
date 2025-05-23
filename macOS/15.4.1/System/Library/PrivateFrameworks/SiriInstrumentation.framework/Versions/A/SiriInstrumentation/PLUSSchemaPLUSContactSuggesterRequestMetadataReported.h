@class NSData;

@interface PLUSSchemaPLUSContactSuggesterRequestMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isPlusContactSuggesterEnabled : 1; unsigned char isForcePromptUsed : 1; } _has;
}

@property (nonatomic) BOOL isPlusContactSuggesterEnabled;
@property (nonatomic) BOOL hasIsPlusContactSuggesterEnabled;
@property (nonatomic) BOOL isForcePromptUsed;
@property (nonatomic) BOOL hasIsForcePromptUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsForcePromptUsed;
- (void)deleteIsPlusContactSuggesterEnabled;
- (id)suppressMessageUnderConditions;

@end
