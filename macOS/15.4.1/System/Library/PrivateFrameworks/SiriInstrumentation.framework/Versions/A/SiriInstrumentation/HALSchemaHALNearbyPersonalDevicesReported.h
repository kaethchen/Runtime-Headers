@class NSData;

@interface HALSchemaHALNearbyPersonalDevicesReported : SISchemaInstrumentationMessage {
    struct { unsigned char iPhoneCount : 1; unsigned char iPadCount : 1; unsigned char watchCount : 1; unsigned char macBookCount : 1; unsigned char macStudioCount : 1; unsigned char iMacCount : 1; } _has;
}

@property (nonatomic) unsigned int iPhoneCount;
@property (nonatomic) BOOL hasIPhoneCount;
@property (nonatomic) unsigned int iPadCount;
@property (nonatomic) BOOL hasIPadCount;
@property (nonatomic) unsigned int watchCount;
@property (nonatomic) BOOL hasWatchCount;
@property (nonatomic) unsigned int macBookCount;
@property (nonatomic) BOOL hasMacBookCount;
@property (nonatomic) unsigned int macStudioCount;
@property (nonatomic) BOOL hasMacStudioCount;
@property (nonatomic) unsigned int iMacCount;
@property (nonatomic) BOOL hasIMacCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIPadCount;
- (void)deleteIMacCount;
- (void)deleteIPhoneCount;
- (void)deleteMacBookCount;
- (void)deleteMacStudioCount;
- (void)deleteWatchCount;
- (id)suppressMessageUnderConditions;

@end
