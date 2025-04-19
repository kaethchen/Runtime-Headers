@class NSString;

@interface HMAccessoryDiagnosticInfoProtoVisibleDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;
@property (readonly, nonatomic) BOOL hasMediaRouteIdString;
@property (retain, nonatomic) NSString *mediaRouteIdString;

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
