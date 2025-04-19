@class NSData, NSString;

@interface PLAssetComputeSyncPayloadWrapper : PBCodable <NSCopying> {
    struct { unsigned char assetPayloadVersion : 1; } _has;
}

@property (nonatomic) BOOL hasAssetPayloadVersion;
@property (nonatomic) unsigned int assetPayloadVersion;
@property (readonly, nonatomic) BOOL hasAssetPayload;
@property (retain, nonatomic) NSData *assetPayload;
@property (readonly, nonatomic) BOOL hasMediaAnalysisPayload;
@property (retain, nonatomic) NSData *mediaAnalysisPayload;
@property (readonly, nonatomic) BOOL hasDeviceBuild;
@property (retain, nonatomic) NSString *deviceBuild;
@property (readonly, nonatomic) BOOL hasDeviceHwModel;
@property (retain, nonatomic) NSString *deviceHwModel;

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

@end
