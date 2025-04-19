@class NSString, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantCarPlayDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char enhancedVoiceTriggerMode : 1; unsigned char directAction : 1; unsigned char carPlayConnection : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL hasVehicleManufacturer;
@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) BOOL hasVehicleModel;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) BOOL hasEnhancedVoiceTriggerMode;
@property (nonatomic) int directAction;
@property (nonatomic) BOOL hasDirectAction;
@property (nonatomic) int carPlayConnection;
@property (nonatomic) BOOL hasCarPlayConnection;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAssistantDimensions;
- (void)deleteCarPlayConnection;
- (void)deleteDirectAction;
- (void)deleteEnhancedVoiceTriggerMode;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;
- (id)suppressMessageUnderConditions;

@end
