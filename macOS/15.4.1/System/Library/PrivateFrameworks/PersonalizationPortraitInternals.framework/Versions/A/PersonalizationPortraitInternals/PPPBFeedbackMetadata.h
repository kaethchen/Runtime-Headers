@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying> {
    struct { unsigned char unixTimestampSec : 1; unsigned char isMapped : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) BOOL hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;
@property (nonatomic) BOOL hasIsMapped;
@property (nonatomic) BOOL isMapped;

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
