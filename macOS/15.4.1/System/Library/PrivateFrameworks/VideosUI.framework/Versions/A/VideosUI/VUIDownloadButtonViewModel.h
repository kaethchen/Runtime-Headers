@class NSObject, NSString, VUIVideosPlayable, NSArray, NSDate, NSNumber, VUIMediaEntity;
@protocol VUIMediaEntityAssetController;

@interface VUIDownloadButtonViewModel : NSObject

@property (nonatomic) unsigned long long downloadState;
@property (retain, nonatomic) NSString *downloadStateStringValue;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL downloadFailedDueToError;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSArray *downloadStateToString;
@property (nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (retain, nonatomic) NSDate *downloadExpirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (retain, nonatomic) NSString *canonicalId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long episodeCount;
@property (nonatomic) BOOL shouldUseShowCanonicalIdForSeasonDownload;
@property (nonatomic) BOOL shouldShowDownloadingOnlyWhenWholeCollectionDownloads;
@property (nonatomic) unsigned long long downloadType;
@property (retain, nonatomic) id confirmationViewModel;
@property (retain, nonatomic) NSNumber *locationPosition;
@property (retain, nonatomic) VUIMediaEntity *mediaEntity;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) BOOL isExpiringSoon;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (retain, nonatomic) NSString *accessibilityIdentifier;

+ (BOOL)shouldShowExpiredImageWithDownloadState:(unsigned long long)a0 isExpired:(BOOL)a1 isExpiringSoon:(BOOL)a2 hasFailed:(BOOL)a3;
+ (id)viewModelForSeasonDownloadWithCanonicalId:(id)a0 title:(id)a1 episodeCount:(long long)a2 useShowCanonicalIdForSeasonDownload:(BOOL)a3 showDownloadingOnlyWhenWholeCollectionDownloads:(BOOL)a4;
+ (id)viewModelWithCanonicalId:(id)a0 title:(id)a1 episodeCount:(long long)a2 downloadType:(unsigned long long)a3;
+ (id)viewModelWithVideosPlayable:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)_assetControllerStateDidChange:(id)a0;
- (id)_createDownloadStateToStringArrayMap;
- (unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)a0;
- (void)_updateDownloadStateFromAssetControllerState:(id)a0;
- (void)deleteDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithCanonicalId:(id)a0 title:(id)a1 episodeCount:(long long)a2 useShowCanonicalIdForSeason:(BOOL)a3 showDownloadingOnlyWhenWholeCollectionDownloads:(BOOL)a4 downloadType:(unsigned long long)a5;
- (id)initWithVideosPlayable:(id)a0;
- (void)preflightPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a1 quality:(long long)a2 prefer3DOrImmersiveDownload:(BOOL)a3;
- (void)stopDownload;

@end
