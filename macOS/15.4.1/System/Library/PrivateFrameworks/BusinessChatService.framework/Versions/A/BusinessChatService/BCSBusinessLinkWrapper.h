@class NSString, BCSBusinessLinkMessage;

@interface BCSBusinessLinkWrapper : PBCodable <NSCopying> {
    struct { unsigned char modTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOrgId;
@property (retain, nonatomic) NSString *orgId;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) BCSBusinessLinkMessage *message;
@property (nonatomic) BOOL hasModTime;
@property (nonatomic) long long modTime;

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
