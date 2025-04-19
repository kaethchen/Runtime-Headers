@class NSString, NSURL, NSDate;
@protocol PODEpisodePlayMetadataProtocol;

@interface PODEpisode : PODContentEntity <PODEpisodeProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *episodeDescription;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) NSURL *feedUrl;
@property (readonly, nonatomic) NSString *externalGuid;
@property (readonly, nonatomic) BOOL doNotAutoDelete;
@property (readonly, nonatomic) unsigned long long storeTrackId;
@property (readonly, nonatomic) unsigned long long byteSize;
@property (readonly, nonatomic) unsigned long long episodeNumber;
@property (readonly, nonatomic) unsigned long long seasonNumber;
@property (readonly, nonatomic) NSURL *mediaDownloadableUrl;
@property (readonly, nonatomic) NSURL *mediaFileUrl;
@property (readonly, nonatomic) NSDate *pubDate;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSURL *episodePageUrl;
@property (readonly, nonatomic) id<PODEpisodePlayMetadataProtocol> playMetadata;
@property (readonly, nonatomic) long long showSyncID;
@property (readonly, nonatomic) long long priceType;
@property (readonly, nonatomic) long long syncID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
