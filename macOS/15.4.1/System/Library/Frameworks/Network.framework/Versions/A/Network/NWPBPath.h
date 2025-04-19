@class NWPBParameters, NSString, NWPBInterface, NSMutableArray, NWPBEndpoint;

@interface NWPBPath : PBCodable <NSCopying> {
    NSMutableArray *_agents;
    NSString *_clientUUID;
    NWPBInterface *_delegateInterface;
    NWPBInterface *_directInterface;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
    int _status;
    BOOL _direct;
    BOOL _ipv4;
    BOOL _ipv6;
    BOOL _local;
    struct { unsigned char status : 1; unsigned char direct : 1; unsigned char ipv4 : 1; unsigned char ipv6 : 1; unsigned char local : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
