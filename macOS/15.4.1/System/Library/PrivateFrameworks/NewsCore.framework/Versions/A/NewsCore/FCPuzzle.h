@class NSDate, NSString, NSArray, FCInterestToken, FCAssetHandle, NTPBPuzzleRecord, FCContentArchive, FCContentManifest;
@protocol FCPuzzleTypeProviding;

@interface FCPuzzle : NSObject <FCPuzzleProviding, FCContentArchivable>

@property (readonly, nonatomic) NTPBPuzzleRecord *puzzleRecord;
@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *puzzleDescription;
@property (readonly, retain, nonatomic) id<FCPuzzleTypeProviding> puzzleType;
@property (readonly, copy, nonatomic) NSString *dataResourceID;
@property (readonly, copy, nonatomic) NSArray *authors;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) NSString *publishDateString;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) long long difficulty;
@property (readonly, copy, nonatomic) NSString *difficultyDescription;
@property (readonly, copy, nonatomic) NSArray *relatedPuzzleIDs;
@property (readonly, nonatomic) FCAssetHandle *thumbnailSmallImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *thumbnailLargeImageAssetHandle;
@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, nonatomic, getter=isDeprecated) BOOL deprecated;
@property (readonly, nonatomic, getter=isDraft) BOOL draft;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *teaserClue;
@property (readonly, nonatomic) NSString *teaserAnswer;
@property (readonly, nonatomic) NSString *teaserInfo;
@property (readonly, nonatomic) NSString *teaserDirection;
@property (readonly, nonatomic) NSString *teaserNumber;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL showInfoModalOnFirstPlay;
@property (readonly, nonatomic) BOOL ignoreFromStatsAndStreaks;
@property (readonly, nonatomic) unsigned long long behaviorFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 puzzleDescription:(id)a3 puzzleType:(id)a4 dataResourceID:(id)a5 authors:(id)a6 publishDate:(id)a7 isPaid:(BOOL)a8 difficulty:(long long)a9 difficultyDescription:(id)a10 relatedPuzzleIDs:(id)a11 thumbnailSmallImageAssetHandle:(id)a12 thumbnailLargeImageAssetHandle:(id)a13 loadDate:(id)a14 teaserClue:(id)a15 teaserAnswer:(id)a16 teaserInfo:(id)a17 teaserDirection:(id)a18 teaserNumber:(id)a19 language:(id)a20 blockedStorefrontIDs:(id)a21 allowedStorefrontIDs:(id)a22 minimumNewsVersion:(long long)a23 showInfoModalOnFirstPlay:(BOOL)a24 ignoreFromStatsAndStreaks:(BOOL)a25 isDeprecated:(BOOL)a26 isDraft:(BOOL)a27 lastModifiedDate:(id)a28;
- (id)initWithPuzzle:(id)a0 overrides:(id)a1;
- (id)initWithPuzzleRecord:(id)a0 puzzleType:(id)a1 assetManager:(id)a2 interestToken:(id)a3 difficultyDescriptions:(id)a4;

@end
