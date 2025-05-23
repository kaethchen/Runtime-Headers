@class NSString;

@interface MXDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasDeviceVersion;
@property (retain, nonatomic) NSString *deviceVersion;
@property (readonly, nonatomic) BOOL hasSystemName;
@property (retain, nonatomic) NSString *systemName;
@property (readonly, nonatomic) BOOL hasSystemVersion;
@property (retain, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) BOOL hasSystemBuild;
@property (retain, nonatomic) NSString *systemBuild;

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
