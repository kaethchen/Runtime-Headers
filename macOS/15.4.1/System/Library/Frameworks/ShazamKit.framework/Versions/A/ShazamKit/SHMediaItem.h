@class NSUUID, NSString, NSData, NSDate, NSArray, NSURL, NSDictionary, CLLocation;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *underlyingIdentifier;
@property (readonly, copy) NSString *fuzzyRepresentation;
@property (retain) NSData *_rawResponseSongsData;
@property (readonly) NSDictionary *properties;
@property (readonly) NSDate *releaseDate;
@property (readonly, copy) NSString *albumName;
@property (readonly, copy) NSArray *staticLyricLines;
@property (readonly, copy) NSString *lyricsSnippet;
@property (readonly) CLLocation *matchLocation;
@property (readonly) double duration;
@property (readonly) long long shazamCount;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *shazamID;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *subtitle;
@property (readonly, copy) NSString *artist;
@property (readonly) NSArray *genres;
@property (readonly, copy) NSString *appleMusicID;
@property (readonly) NSURL *appleMusicURL;
@property (readonly) NSURL *webURL;
@property (readonly) NSURL *artworkURL;
@property (readonly) NSURL *videoURL;
@property (readonly) BOOL explicitContent;
@property (readonly, copy) NSString *isrc;
@property (readonly) NSArray *timeRanges;
@property (readonly) NSArray *frequencySkewRanges;
@property (readonly) NSDate *creationDate;

+ (void)fetchHapticsWithMediaItems:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchMediaItemsWithShazamIDs:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isHapticTrackAvailableForMediaItem:(id)a0 completionHandler:(id /* block */)a1;
+ (id)mediaItemWithDictionary:(id)a0;
+ (id)mediaItemWithProperties:(id)a0;
+ (void)presentMediaItem:(id)a0 completionHandler:(id /* block */)a1;
+ (void)presentMediaItem:(id)a0 presentationSettings:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sh_uiServerConnection;
+ (id)transformedPropertiesFromProperties:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)valueForProperty:(id)a0;
- (BOOL)describesFrequencySkew:(double)a0;
- (BOOL)describesOffset:(double)a0;
- (BOOL)isEqualMediaItem:(id)a0;
- (id)validValueForProperty:(id)a0;

@end
