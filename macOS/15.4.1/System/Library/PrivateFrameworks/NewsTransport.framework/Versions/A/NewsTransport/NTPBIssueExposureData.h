@class NSData;

@interface NTPBIssueExposureData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIssueSessionId;
@property (retain, nonatomic) NSData *issueSessionId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
