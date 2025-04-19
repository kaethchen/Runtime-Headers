@class LPAudio, NSString, NSArray, NSURL, LPLyricExcerptMetadata;

@interface LPInlineMediaPlaybackInformation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, nonatomic) BOOL isAvailableForAnonymousDownload;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, retain, nonatomic) LPLyricExcerptMetadata *lyricExcerpt;
@property (nonatomic) double startTime;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, retain, nonatomic) LPAudio *audio;

+ (id)_inlineiTunesMediaPlaybackInformationWithType:(unsigned long long)a0 storeIdentifier:(id)a1 storefrontIdentifier:(id)a2 offers:(id)a3 previewURL:(id)a4 lyricExcerpt:(id)a5 startTime:(double)a6;
+ (id)albumPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1 offers:(id)a2;
+ (id)audioBookPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1 previewURL:(id)a2 persistentIdentifier:(id)a3;
+ (id)audioFilePlaybackInformationWithAudio:(id)a0;
+ (id)playlistPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1;
+ (id)podcastEpisodePlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1 offers:(id)a2 startTime:(double)a3;
+ (id)podcastPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1 offers:(id)a2;
+ (id)radioPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1;
+ (id)songPlaybackInformationWithStoreIdentifier:(id)a0 storefrontIdentifier:(id)a1 offers:(id)a2 previewURL:(id)a3 lyricExcerpt:(id)a4;

- (void).cxx_destruct;
- (unsigned long long)availability;

@end
