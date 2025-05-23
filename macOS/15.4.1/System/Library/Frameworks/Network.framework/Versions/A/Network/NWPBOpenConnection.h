@class NSString, NWPBParameters, NWPBEndpoint;

@interface NWPBOpenConnection : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
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
