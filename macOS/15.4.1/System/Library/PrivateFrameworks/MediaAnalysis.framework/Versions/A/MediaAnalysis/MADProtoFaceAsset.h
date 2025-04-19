@class NSString, NSMutableArray;

@interface MADProtoFaceAsset : PBCodable <MADProtoAnalysisPhotosConversionProtocol, NSCopying> {
    struct { unsigned char adjustmentVersion : 1; unsigned char assetAdjustmentTimestamp : 1; unsigned char algorithmVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAssetLocalIdentifier;
@property (retain, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) BOOL hasAssetCloudIdentifier;
@property (retain, nonatomic) NSString *assetCloudIdentifier;
@property (nonatomic) BOOL hasAssetAdjustmentTimestamp;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic) BOOL hasAlgorithmVersion;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) BOOL hasAdjustmentVersion;
@property (nonatomic) double adjustmentVersion;
@property (retain, nonatomic) NSMutableArray *detectedFaces;

+ (Class)detectedFacesType;
+ (id)protoFromPhotosAsset:(id)a0;

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
- (void)addDetectedFaces:(id)a0;
- (void)clearDetectedFaces;
- (id)detectedFacesAtIndex:(unsigned long long)a0;
- (unsigned long long)detectedFacesCount;
- (void)persistToPhotosAsset:(id)a0;

@end
