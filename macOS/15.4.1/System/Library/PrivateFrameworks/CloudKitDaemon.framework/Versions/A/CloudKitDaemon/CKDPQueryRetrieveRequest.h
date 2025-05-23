@class CKDPAssetsToDownload, CKDPQuery, NSData, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) CKDPQuery *query;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;

+ (id)options;

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

@end
