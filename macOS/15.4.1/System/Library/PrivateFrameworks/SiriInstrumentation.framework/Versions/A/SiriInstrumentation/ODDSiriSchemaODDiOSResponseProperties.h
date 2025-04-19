@class NSData;

@interface ODDSiriSchemaODDiOSResponseProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysShowSiriCaptionsEnabled : 1; unsigned char isAlwaysShowSpeechEnabled : 1; } _has;
}

@property (nonatomic) BOOL isAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL isAlwaysShowSpeechEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSpeechEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAlwaysShowSpeechEnabled;
- (void)deleteIsAlwaysShowSiriCaptionsEnabled;
- (id)suppressMessageUnderConditions;

@end
