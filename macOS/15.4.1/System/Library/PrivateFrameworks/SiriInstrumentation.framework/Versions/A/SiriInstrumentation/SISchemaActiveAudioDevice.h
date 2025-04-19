@class NSString, NSData;

@interface SISchemaActiveAudioDevice : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorIdentifier;
@property (nonatomic) BOOL hasVendorIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) BOOL hasProductIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProductIdentifier;
- (void)deleteVendorIdentifier;
- (id)suppressMessageUnderConditions;

@end
