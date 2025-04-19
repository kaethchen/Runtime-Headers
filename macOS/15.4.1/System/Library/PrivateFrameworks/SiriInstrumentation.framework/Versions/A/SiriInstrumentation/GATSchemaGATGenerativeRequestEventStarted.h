@class NSData;

@interface GATSchemaGATGenerativeRequestEventStarted : SISchemaInstrumentationMessage {
    struct { unsigned char usecase : 1; unsigned char mediaQAUseCase : 1; unsigned char llmAgentName : 1; } _has;
}

@property (nonatomic) int usecase;
@property (nonatomic) BOOL hasUsecase;
@property (nonatomic) int mediaQAUseCase;
@property (nonatomic) BOOL hasMediaQAUseCase;
@property (nonatomic) int llmAgentName;
@property (nonatomic) BOOL hasLlmAgentName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLlmAgentName;
- (void)deleteMediaQAUseCase;
- (void)deleteUsecase;
- (id)suppressMessageUnderConditions;

@end
