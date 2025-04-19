@class NWPBHostEndpoint, NWPBServiceEndpoint, NWPBInterface, NSData, NWPBAddressEndpoint;

@interface NWPBEndpoint : PBCodable <NSCopying> {
    NWPBAddressEndpoint *_address;
    NWPBHostEndpoint *_host;
    NWPBInterface *_interface;
    NWPBServiceEndpoint *_service;
    NSData *_txtRecord;
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
