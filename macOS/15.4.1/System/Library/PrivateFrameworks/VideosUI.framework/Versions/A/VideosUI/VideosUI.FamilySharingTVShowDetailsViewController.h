@class NSArray, NSString, NSMenu, NSAttributedString;

@interface VideosUI.FamilySharingTVShowDetailsViewController : VUIBaseViewController <TVShowDetailLockupModel, AMPFilterableViewModel> {
    void /* unknown type, empty encoding */ showMediaEntity;
    void /* unknown type, empty encoding */ ownerId;
    void /* unknown type, empty encoding */ lockup;
    void /* unknown type, empty encoding */ currentFilteringTerm;
    void /* unknown type, empty encoding */ imageDownloader;
    void /* unknown type, empty encoding */ familySharingSource;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ unfilteredSections;
    void /* unknown type, empty encoding */ subtitleLinkUUID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionMenu;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* unknown type, empty encoding */ filterString;
    void /* unknown type, empty encoding */ filterStatusString;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ downloadViewModel;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) void /* unknown type, empty encoding */ showFilterBarBackground;
@property (nonatomic, readonly) unsigned long long badges;
@property (nonatomic, readonly) NSAttributedString *contentRatingString;
@property (nonatomic) void /* unknown type, empty encoding */ extrasButtonAction;
@property (nonatomic, copy) NSString *productTitle;
@property (nonatomic) void /* unknown type, empty encoding */ titleIsEditable;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleLinkUUID;
@property (nonatomic, readonly) NSString *callout;
@property (nonatomic) void /* unknown type, empty encoding */ rating;
@property (nonatomic) void /* unknown type, empty encoding */ downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic) void /* unknown type, empty encoding */ playButtonState;
@property (nonatomic) void /* unknown type, empty encoding */ playPauseStopAction;
@property (nonatomic) void /* unknown type, empty encoding */ downloadAction;
@property (nonatomic, retain) NSMenu *actionMenu;
@property (nonatomic) void /* unknown type, empty encoding */ filteringIsEnabled;
@property (nonatomic, copy) NSString *filterString;
@property (nonatomic, copy) NSString *filterStatusString;
@property (nonatomic) void /* unknown type, empty encoding */ showDownloadedSongsMessage;

+ (id)keyPathsForValuesAffectingSubtitle;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)doDownloadAction;
- (id)actionMenuForEpisodes:(id)a0;
- (void)doShowAllSongs;
- (void)requestArtworkAtSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)doPlayPauseStop;
- (void)vui_viewDidLoad;
- (void)doDownloadMenuAction:(id)a0;
- (void)doRemoveDownloadsMenuAction:(id)a0;

@end
