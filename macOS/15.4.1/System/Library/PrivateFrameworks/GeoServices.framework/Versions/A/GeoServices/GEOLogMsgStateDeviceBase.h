@class PBUnknownFields;

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    BOOL _deviceInVehicle;
    struct { unsigned char has_deviceBatteryState : 1; unsigned char has_deviceInterfaceOrientation : 1; unsigned char has_deviceInVehicle : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) BOOL hasDeviceInVehicle;
@property (nonatomic) BOOL deviceInVehicle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeviceBatteryState:(id)a0;
- (int)StringAsDeviceInterfaceOrientation:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)deviceBatteryStateAsString:(int)a0;
- (id)deviceInterfaceOrientationAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
