@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *interfaceVendorID;
@property (nonatomic) BOOL hasInterfaceVendorID;
@property (copy, nonatomic) NSString *interfaceProductID;
@property (nonatomic) BOOL hasInterfaceProductID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInterfaceProductID;
- (void)deleteInterfaceVendorID;
- (id)suppressMessageUnderConditions;

@end
