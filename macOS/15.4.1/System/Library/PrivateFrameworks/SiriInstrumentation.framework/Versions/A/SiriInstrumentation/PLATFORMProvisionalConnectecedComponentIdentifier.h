@class NSString, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectecedComponentIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
@property (copy, nonatomic) NSString *component;
@property (nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponent;
- (void)deleteUuid;

@end
