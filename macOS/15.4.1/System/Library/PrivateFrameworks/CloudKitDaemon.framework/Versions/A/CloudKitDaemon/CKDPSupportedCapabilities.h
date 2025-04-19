@class CKDPDate, CKDPIdentifier, NSMutableArray;

@interface CKDPSupportedCapabilities : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasTime;
@property (retain, nonatomic) CKDPDate *time;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) CKDPIdentifier *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (retain, nonatomic) CKDPIdentifier *userIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneLevelCapabilities;
@property (retain, nonatomic) NSMutableArray *recordLevelCapabilities;
@property (retain, nonatomic) NSMutableArray *fieldLevelCapabilities;

+ (Class)fieldLevelCapabilitiesType;
+ (Class)recordLevelCapabilitiesType;
+ (Class)zoneLevelCapabilitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)recordLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (void)addFieldLevelCapabilities:(id)a0;
- (void)addRecordLevelCapabilities:(id)a0;
- (void)addZoneLevelCapabilities:(id)a0;
- (void)clearFieldLevelCapabilities;
- (void)clearRecordLevelCapabilities;
- (void)clearZoneLevelCapabilities;
- (id)fieldLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldLevelCapabilitiesCount;
- (unsigned long long)recordLevelCapabilitiesCount;
- (id)zoneLevelCapabilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneLevelCapabilitiesCount;

@end
