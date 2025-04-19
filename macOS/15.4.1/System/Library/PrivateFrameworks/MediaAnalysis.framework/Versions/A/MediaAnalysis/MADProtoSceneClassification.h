@class VCPProtoBounds;

@interface MADProtoSceneClassification : PBCodable <NSCopying>

@property (nonatomic) unsigned long long extendedSceneIdentifier;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) VCPProtoBounds *boundingBox;

+ (id)protoFromPhotosSceneClassification:(id)a0;

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
- (id)photosSceneClassification;

@end
