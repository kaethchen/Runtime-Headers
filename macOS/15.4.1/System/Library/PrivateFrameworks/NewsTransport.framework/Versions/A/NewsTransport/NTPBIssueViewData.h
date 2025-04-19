@class NSData;

@interface NTPBIssueViewData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIssueViewingSessionId;
@property (retain, nonatomic) NSData *issueViewingSessionId;

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
