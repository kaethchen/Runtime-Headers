@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char participantKeyLost : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic) BOOL hasParticipantKeyLost;
@property (nonatomic) BOOL participantKeyLost;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (id)options;
+ (Class)publicKeysType;
+ (Class)pluginFieldsType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;
- (void)addPluginFields:(id)a0;
- (void)clearPluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)pluginFieldsCount;

@end
