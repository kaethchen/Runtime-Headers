@class NSData;

@interface IFTSchemaIFTPermissionRequirement : SISchemaInstrumentationMessage

@property (nonatomic) BOOL siriPermissionRequired;
@property (nonatomic) BOOL hasSiriPermissionRequired;
@property (nonatomic) BOOL shortcutsPermissionRequired;
@property (nonatomic) BOOL hasShortcutsPermissionRequired;
@property (nonatomic) BOOL preciseLocationPermissionRequired;
@property (nonatomic) BOOL hasPreciseLocationPermissionRequired;
@property (nonatomic) BOOL locationPermissionRequired;
@property (nonatomic) BOOL hasLocationPermissionRequired;
@property (nonatomic) BOOL wifiPermissionRequired;
@property (nonatomic) BOOL hasWifiPermissionRequired;
@property (nonatomic) BOOL bluetoothPermissionRequired;
@property (nonatomic) BOOL hasBluetoothPermissionRequired;
@property (nonatomic) BOOL photosPermissionRequired;
@property (nonatomic) BOOL hasPhotosPermissionRequired;
@property (nonatomic) BOOL contactsPermissionRequired;
@property (nonatomic) BOOL hasContactsPermissionRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Permissionrequirement;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBluetoothPermissionRequired;
- (void)deleteContactsPermissionRequired;
- (void)deleteLocationPermissionRequired;
- (void)deletePhotosPermissionRequired;
- (void)deletePreciseLocationPermissionRequired;
- (void)deleteShortcutsPermissionRequired;
- (void)deleteSiriPermissionRequired;
- (void)deleteWifiPermissionRequired;
- (id)suppressMessageUnderConditions;

@end
