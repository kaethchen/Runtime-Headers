@class NSData;

@interface SISchemaTVRemoteInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char remoteType : 1; } _has;
}

@property (nonatomic) int remoteType;
@property (nonatomic) BOOL hasRemoteType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRemoteType;
- (id)suppressMessageUnderConditions;

@end
