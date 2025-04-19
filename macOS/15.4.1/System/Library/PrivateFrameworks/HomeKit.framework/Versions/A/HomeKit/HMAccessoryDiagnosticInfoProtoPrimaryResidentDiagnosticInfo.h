@class HMRemoteEventRouterProtoServerDiagnosticInfo, HMAccessoryInfoProtoWifiNetworkInfoEvent, NSMutableArray;

@interface HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char numAppleMediaAccessories : 1; unsigned char numResidents : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasWifiInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiInfo;
@property (retain, nonatomic) NSMutableArray *networkInfos;
@property (retain, nonatomic) NSMutableArray *networkServiceInfos;
@property (readonly, nonatomic) BOOL hasEventRouterServerInfo;
@property (retain, nonatomic) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;
@property (retain, nonatomic) NSMutableArray *visibleAccessoriesInfos;
@property (retain, nonatomic) NSMutableArray *visibleIDSDevices;
@property (retain, nonatomic) NSMutableArray *networkVisibleDeviceInfos;
@property (retain, nonatomic) NSMutableArray *proximityVisibleDeviceInfos;
@property (nonatomic) BOOL hasNumAppleMediaAccessories;
@property (nonatomic) long long numAppleMediaAccessories;
@property (nonatomic) BOOL hasNumResidents;
@property (nonatomic) long long numResidents;

+ (Class)networkInfoType;
+ (Class)proximityVisibleDeviceInfosType;
+ (Class)networkServiceInfoType;
+ (Class)networkVisibleDeviceInfosType;
+ (Class)visibleAccessoriesInfoType;
+ (Class)visibleIDSDevicesType;

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
- (void)addNetworkInfo:(id)a0;
- (void)addProximityVisibleDeviceInfos:(id)a0;
- (void)addNetworkServiceInfo:(id)a0;
- (void)addNetworkVisibleDeviceInfos:(id)a0;
- (void)addVisibleAccessoriesInfo:(id)a0;
- (void)addVisibleIDSDevices:(id)a0;
- (void)clearNetworkInfos;
- (void)clearNetworkServiceInfos;
- (void)clearNetworkVisibleDeviceInfos;
- (void)clearProximityVisibleDeviceInfos;
- (void)clearVisibleAccessoriesInfos;
- (void)clearVisibleIDSDevices;
- (id)networkInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkInfosCount;
- (id)networkServiceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)networkServiceInfosCount;
- (id)networkVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)networkVisibleDeviceInfosCount;
- (id)proximityVisibleDeviceInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)proximityVisibleDeviceInfosCount;
- (id)visibleAccessoriesInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleAccessoriesInfosCount;
- (id)visibleIDSDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleIDSDevicesCount;

@end
