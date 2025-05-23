@class NSString;

@interface IDSQRProtoPluginControlResponse : PBCodable <NSCopying> {
    struct { unsigned char pluginParticipantId : 1; } _has;
}

@property (nonatomic) BOOL hasPluginParticipantId;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (readonly, nonatomic) BOOL hasPluginServerCertHostname;
@property (retain, nonatomic) NSString *pluginServerCertHostname;
@property (readonly, nonatomic) BOOL hasPluginServerCertOid;
@property (retain, nonatomic) NSString *pluginServerCertOid;

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
