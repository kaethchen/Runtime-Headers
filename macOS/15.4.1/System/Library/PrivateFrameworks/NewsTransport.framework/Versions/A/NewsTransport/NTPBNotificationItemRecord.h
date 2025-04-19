@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores, NSString, NTPBRecordBase, NSMutableArray;

@interface NTPBNotificationItemRecord : PBCodable <NSCopying> {
    struct { unsigned char targetMinNewsVersion : 1; unsigned char targetDeviceTypes : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasNotificationID;
@property (retain, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) BOOL hasNotabilityScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores *notabilityScores;
@property (nonatomic) BOOL hasTargetDeviceTypes;
@property (nonatomic) unsigned int targetDeviceTypes;
@property (nonatomic) BOOL hasTargetMinNewsVersion;
@property (nonatomic) long long targetMinNewsVersion;
@property (retain, nonatomic) NSMutableArray *suppressIfFollowingTagIDs;

+ (Class)suppressIfFollowingTagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSuppressIfFollowingTagIDs:(id)a0;
- (void)clearSuppressIfFollowingTagIDs;
- (id)suppressIfFollowingTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)suppressIfFollowingTagIDsCount;

@end
