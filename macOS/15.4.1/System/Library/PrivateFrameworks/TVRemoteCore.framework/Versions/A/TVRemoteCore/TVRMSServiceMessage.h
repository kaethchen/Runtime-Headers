@class NSString;

@interface TVRMSServiceMessage : PBCodable <NSCopying> {
    struct { unsigned char port : 1; unsigned char serviceDiscoverySource : 1; unsigned char serviceLegacyFlags : 1; unsigned char serviceType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasNetworkName;
@property (retain, nonatomic) NSString *networkName;
@property (readonly, nonatomic) BOOL hasHostName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) int port;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasServiceDiscoverySource;
@property (nonatomic) int serviceDiscoverySource;
@property (nonatomic) BOOL hasServiceLegacyFlags;
@property (nonatomic) int serviceLegacyFlags;
@property (readonly, nonatomic) BOOL hasHomeSharingGroupKey;
@property (retain, nonatomic) NSString *homeSharingGroupKey;

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
