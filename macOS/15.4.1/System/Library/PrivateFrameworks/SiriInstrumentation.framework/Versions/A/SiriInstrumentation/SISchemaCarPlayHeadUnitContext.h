@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) BOOL hasVehicleModel;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL hasVehicleManufacturer;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;
- (id)suppressMessageUnderConditions;

@end
