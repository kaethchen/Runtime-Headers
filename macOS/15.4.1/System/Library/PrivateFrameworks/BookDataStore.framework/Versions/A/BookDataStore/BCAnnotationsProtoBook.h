@class NSString, NSMutableArray;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSMutableArray *annotations;

+ (Class)annotationType;

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
- (void)addAnnotation:(id)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;
- (id)annotationAtIndex:(unsigned long long)a0;

@end
