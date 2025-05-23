@class NSData;

@interface NLXSchemaCDMClientSetupStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char serviceGraphName : 1; unsigned char performWarmupOperations : 1; unsigned char memoryPressure : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int serviceGraphName;
@property (nonatomic) BOOL hasServiceGraphName;
@property (nonatomic) BOOL performWarmupOperations;
@property (nonatomic) BOOL hasPerformWarmupOperations;
@property (nonatomic) int memoryPressure;
@property (nonatomic) BOOL hasMemoryPressure;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteMemoryPressure;
- (void)deletePerformWarmupOperations;
- (void)deleteServiceGraphName;
- (id)suppressMessageUnderConditions;

@end
