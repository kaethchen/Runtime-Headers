@class NSColor;
@protocol AMPEpisodeLockupModel;

@interface AMPDesktopUI._EpisodeLockupCell : NSTableCellView {
    void /* unknown type, empty encoding */ kNumDescriptionLines;
    void /* unknown type, empty encoding */ watchedLabelObserver;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ epNumberLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ epTitleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ epDescriptionLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ descriptionHeight;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ watchedAmountView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ downloadButton;
@property (nonatomic, copy) id objectValue;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) id<AMPEpisodeLockupModel> viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ isRolled;
@property (nonatomic, readonly) double percentageWatched;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) NSColor *numberTint;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doActionClicked:(id)a0;
- (id)propertyKeysForViewSpy;
- (void)reflectDownloadBtn:(id)a0;

@end
