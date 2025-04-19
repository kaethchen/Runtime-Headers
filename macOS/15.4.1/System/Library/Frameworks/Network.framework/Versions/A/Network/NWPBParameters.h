@class NSString, NSData, NWPBInterface, NWPBEndpoint, NSMutableArray;

@interface NWPBParameters : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _prohibitedInterfaceSubTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _prohibitedInterfaceTypes;
    NSString *_account;
    unsigned int _addressFamily;
    int _dataMode;
    NSString *_effectiveBundleID;
    NSString *_effectiveProcessUUID;
    unsigned int _ipProtocol;
    NWPBEndpoint *_localEndpoint;
    NSData *_metadata;
    unsigned int _multipathService;
    NSMutableArray *_preferredAgents;
    NSMutableArray *_prohibitedAgents;
    NSMutableArray *_prohibitedInterfaces;
    NSString *_realProcessUUID;
    NSMutableArray *_requiredAgents;
    NWPBInterface *_requiredInterface;
    int _requiredInterfaceType;
    unsigned int _trafficClass;
    NSString *_url;
    BOOL _fastOpen;
    BOOL _keepalive;
    BOOL _longOutstandingQueries;
    BOOL _noFallback;
    BOOL _prohibitExpensive;
    BOOL _reduceBuffering;
    BOOL _reuseLocalAddress;
    BOOL _useAWDL;
    BOOL _useP2P;
    struct { unsigned char addressFamily : 1; unsigned char dataMode : 1; unsigned char ipProtocol : 1; unsigned char multipathService : 1; unsigned char requiredInterfaceType : 1; unsigned char trafficClass : 1; unsigned char fastOpen : 1; unsigned char keepalive : 1; unsigned char longOutstandingQueries : 1; unsigned char noFallback : 1; unsigned char prohibitExpensive : 1; unsigned char reduceBuffering : 1; unsigned char reuseLocalAddress : 1; unsigned char useAWDL : 1; unsigned char useP2P : 1; } _has;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
