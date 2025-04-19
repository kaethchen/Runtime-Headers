@class NSData;

@interface ODDSiriSchemaODDExecutionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char extensionName : 1; unsigned char executionStatus : 1; } _has;
}

@property (nonatomic) int extensionName;
@property (nonatomic) BOOL hasExtensionName;
@property (nonatomic) int executionStatus;
@property (nonatomic) BOOL hasExecutionStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutionStatus;
- (void)deleteExtensionName;
- (id)suppressMessageUnderConditions;

@end
