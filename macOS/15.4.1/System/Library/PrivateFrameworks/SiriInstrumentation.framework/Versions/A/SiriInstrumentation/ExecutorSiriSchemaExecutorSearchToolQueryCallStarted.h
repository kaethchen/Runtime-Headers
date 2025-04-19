@class NSData;

@interface ExecutorSiriSchemaExecutorSearchToolQueryCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char executorSearchToolQueryType : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int executorSearchToolQueryType;
@property (nonatomic) BOOL hasExecutorSearchToolQueryType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutorSearchToolQueryType;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
