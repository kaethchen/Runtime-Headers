@class NSData;

@interface FLOWSchemaFLOWLocationAccessPermissionPromptEnded : SISchemaInstrumentationMessage {
    struct { unsigned char permissionStatusResult : 1; unsigned char isPreciseLocationResult : 1; } _has;
}

@property (nonatomic) int permissionStatusResult;
@property (nonatomic) BOOL hasPermissionStatusResult;
@property (nonatomic) BOOL isPreciseLocationResult;
@property (nonatomic) BOOL hasIsPreciseLocationResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreciseLocationResult;
- (void)deletePermissionStatusResult;
- (id)suppressMessageUnderConditions;

@end
