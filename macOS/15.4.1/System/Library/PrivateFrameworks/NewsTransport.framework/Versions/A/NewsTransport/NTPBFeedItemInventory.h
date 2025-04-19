@class NTPBDate, NSMutableArray;

@interface NTPBFeedItemInventory : PBCodable <NSCopying> {
    struct { unsigned char feedItemVersion : 1; unsigned char inventoryVersion : 1; } _has;
}

@property (nonatomic) BOOL hasInventoryVersion;
@property (nonatomic) unsigned int inventoryVersion;
@property (nonatomic) BOOL hasFeedItemVersion;
@property (nonatomic) unsigned int feedItemVersion;
@property (readonly, nonatomic) BOOL hasLastRefreshed;
@property (retain, nonatomic) NTPBDate *lastRefreshed;
@property (retain, nonatomic) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFeedItems:(id)a0;
- (void)clearFeedItems;
- (id)feedItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedItemsCount;

@end
