@class NSAttributedString;

@interface AMPLargeProductHeaderLockup : AMPBindableView {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ controlStack;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ shuffleButton;
    void /* unknown type, empty encoding */ editButton;
    void /* unknown type, empty encoding */ settingsButton;
    void /* unknown type, empty encoding */ refreshButton;
    void /* unknown type, empty encoding */ downloadButton;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ artworkAspectConstraint;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) BOOL playButtonsShouldBeEnabled;
@property (nonatomic, readonly) BOOL hideEditButton;
@property (nonatomic, readonly) BOOL settingsButtonShouldBeHidden;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;

+ (id)keyPathsForValuesAffectingAttributedTitle;
+ (id)keyPathsForValuesAffectingDownloadProgress;
+ (id)keyPathsForValuesAffectingDownloadState;
+ (id)keyPathsForValuesAffectingHideEditButton;
+ (id)keyPathsForValuesAffectingPlayButtonsShouldBeEnabled;
+ (id)keyPathsForValuesAffectingSettingsButtonShouldBeHidden;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doDownloadAction:(id)a0;
- (void)doSubtitleClicked:(id)a0;

@end
