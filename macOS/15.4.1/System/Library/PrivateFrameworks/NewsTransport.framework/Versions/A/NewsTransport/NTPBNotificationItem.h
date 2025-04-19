@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores, NSString, NTPBFeedItem, NSMutableArray;

@interface NTPBNotificationItem : PBCodable <NSCopying> {
    struct { unsigned char targetMinNewsVersion : 1; unsigned char source : 1; unsigned char targetDeviceTypes : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasFeedItem;
@property (retain, nonatomic) NTPBFeedItem *feedItem;
@property (readonly, nonatomic) BOOL hasCanonicalID;
@property (retain, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) BOOL hasNotabilityScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores *notabilityScores;
@property (nonatomic) BOOL hasTargetDeviceTypes;
@property (nonatomic) unsigned int targetDeviceTypes;
@property (nonatomic) BOOL hasTargetMinNewsVersion;
@property (nonatomic) long long targetMinNewsVersion;
@property (retain, nonatomic) NSMutableArray *suppressIfFollowingTagIDs;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasAlgoID;
@property (retain, nonatomic) NSString *algoID;

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
