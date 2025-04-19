@class IFTSchemaIFTPermissionRequirement, IFTSchemaIFTAppRequirement, NSData, IFTSchemaIFTSystemRequirement;

@interface IFTSchemaIFTActionRequirement : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL unsupported;
@property (nonatomic) BOOL hasUnsupported;
@property (retain, nonatomic) IFTSchemaIFTAppRequirement *appRequirement;
@property (nonatomic) BOOL hasAppRequirement;
@property (retain, nonatomic) IFTSchemaIFTPermissionRequirement *permissionRequirement;
@property (nonatomic) BOOL hasPermissionRequirement;
@property (retain, nonatomic) IFTSchemaIFTSystemRequirement *systemRequirement;
@property (nonatomic) BOOL hasSystemRequirement;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Actionrequirement;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppRequirement;
- (void)deleteExists;
- (void)deletePermissionRequirement;
- (void)deleteSystemRequirement;
- (void)deleteUnsupported;
- (id)suppressMessageUnderConditions;

@end
