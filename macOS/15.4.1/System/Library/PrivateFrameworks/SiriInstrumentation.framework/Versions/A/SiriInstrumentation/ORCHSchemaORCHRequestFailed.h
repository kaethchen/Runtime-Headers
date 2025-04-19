@class NSData;

@interface ORCHSchemaORCHRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; unsigned char errorDomain : 1; unsigned char orchErrorCode : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int orchErrorCode;
@property (nonatomic) BOOL hasOrchErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteOrchErrorCode;
- (id)suppressMessageUnderConditions;

@end
