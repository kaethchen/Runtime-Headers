@class NSString, NTPBRecordBase;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {
    struct { unsigned char canAccessDrafts : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) BOOL hasCanAccessDrafts;
@property (nonatomic) BOOL canAccessDrafts;
@property (readonly, nonatomic) BOOL hasDraftArticleListID;
@property (retain, nonatomic) NSString *draftArticleListID;
@property (readonly, nonatomic) BOOL hasDraftIssueListID;
@property (retain, nonatomic) NSString *draftIssueListID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
