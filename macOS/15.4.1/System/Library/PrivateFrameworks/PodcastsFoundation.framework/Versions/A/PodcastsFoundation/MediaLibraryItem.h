@class NSNumber, NSString, NSURL;

@interface MediaLibraryItem : NSObject

@property (class, readonly, nonatomic) NSNumber *remeberBookmark;
@property (class, readonly, nonatomic) NSNumber *playbackStart;
@property (class, readonly, nonatomic) NSNumber *playbackRelativeVolume;
@property (class, readonly, nonatomic) NSNumber *isOTAPurchased;
@property (class, readonly, nonatomic) NSNumber *needsRestore;
@property (class, readonly, nonatomic) NSNumber *chosenByAutofill;
@property (class, readonly, nonatomic) NSNumber *isCompilation;

@property (retain, nonatomic) NSNumber *dateAccessed;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSString *externalGuid;
@property (retain, nonatomic) NSNumber *bookmarkTimeMillis;
@property (retain, nonatomic) NSString *seriesName;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSNumber *hasVideo;
@property (retain, nonatomic) NSString *feedUrl;
@property (retain, nonatomic) NSNumber *playlistId;
@property (retain, nonatomic) NSNumber *dateReleased;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSNumber *totalTimeMillis;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *hasBeenPlayed;
@property (retain, nonatomic) NSNumber *serpentId;
@property (retain, nonatomic) NSNumber *activeDsid;
@property (retain, nonatomic) NSString *statsDownloadIdentifier;
@property (retain, nonatomic) NSURL *itemFilePath;
@property (retain, nonatomic) NSURL *artworkUrl;
@property (retain, nonatomic) NSNumber *artworkTokenId;

- (void).cxx_destruct;
- (id)initWithDateAccessed:(id)a0 album:(id)a1 title:(id)a2 fileSize:(id)a3 externalGuid:(id)a4 bookmarkTimeMillis:(id)a5 seriesName:(id)a6 itemDescription:(id)a7 hasVideo:(id)a8 feedUrl:(id)a9 playlistId:(id)a10 dateReleased:(id)a11 artist:(id)a12 totalTimeMillis:(id)a13 playCount:(id)a14 hasBeenPlayed:(id)a15 serpentId:(id)a16 activeDsid:(id)a17 statsDownloadIdentifier:(id)a18 itemFilePath:(id)a19 artworkUrl:(id)a20 artworkTokenId:(id)a21;

@end
