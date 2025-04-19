@class NSString, NSNumber;

@interface ICPlaybackPositionEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *playbackPositionDomain;
@property (copy, nonatomic) NSString *playbackPositionKey;
@property (copy, nonatomic) NSString *libraryIdentifier;
@property (copy, nonatomic) NSNumber *itemPersistentIdentifier;
@property (copy, nonatomic) NSNumber *bookmarkTimestamp;
@property (copy, nonatomic) NSNumber *bookmarkTime;
@property (copy, nonatomic) NSNumber *userPlayCount;
@property (copy, nonatomic) NSNumber *hasBeenPlayed;

+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)a0 itemTitle:(id)a1 albumName:(id)a2 itemArtistName:(id)a3 feedURL:(id)a4 feedGUID:(id)a5;
+ (id)ubiquitousIdentifierWithItemTitle:(id)a0 albumName:(id)a1 itemArtistName:(id)a2;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)a0 feedGUID:(id)a1;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)a0;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)a0 feedGUID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0;
- (id)initWithDomain:(id)a0 playbackPositionKey:(id)a1 persistentIdentifier:(id)a2;

@end
