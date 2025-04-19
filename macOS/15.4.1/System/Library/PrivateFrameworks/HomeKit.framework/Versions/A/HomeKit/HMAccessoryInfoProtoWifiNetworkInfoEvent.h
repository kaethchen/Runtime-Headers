@class NSString;

@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char networkRSSI : 1; unsigned char requiresPassword : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMacAddress;
@property (retain, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) BOOL hasNetworkSSID;
@property (retain, nonatomic) NSString *networkSSID;
@property (readonly, nonatomic) BOOL hasNetworkGatewayIPAddress;
@property (retain, nonatomic) NSString *networkGatewayIPAddress;
@property (readonly, nonatomic) BOOL hasNetworkBSSID;
@property (retain, nonatomic) NSString *networkBSSID;
@property (readonly, nonatomic) BOOL hasNetworkGatewayMacAddress;
@property (retain, nonatomic) NSString *networkGatewayMacAddress;
@property (nonatomic) BOOL hasNetworkRSSI;
@property (nonatomic) int networkRSSI;
@property (nonatomic) BOOL hasRequiresPassword;
@property (nonatomic) BOOL requiresPassword;

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
