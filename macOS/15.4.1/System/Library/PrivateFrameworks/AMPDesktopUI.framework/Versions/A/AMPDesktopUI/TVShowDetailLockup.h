@class NSArray, NSFormatter, NSView, NSProgressIndicator, _TtC12AMPDesktopUI24LibraryMovieHeaderLockup, NSTimer, _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup;
@protocol TVShowDetailLockupModel;

@interface TVShowDetailLockup : NSTableCellView {
    BOOL _loadingState;
}

@property (retain, nonatomic) _TtC12AMPDesktopUI24LibraryMovieHeaderLockup *headerLockup;
@property (retain, nonatomic) _TtC12AMPDesktopUI30AMPSectionedEpisodeTableLockup *episodesLockup;
@property (retain, nonatomic) NSView *loadingContainer;
@property (retain, nonatomic) NSProgressIndicator *loadingIndicator;
@property (retain, nonatomic) NSTimer *loadingVisibilityTimer;
@property (nonatomic) BOOL loadingState;
@property (retain, nonatomic) id<TVShowDetailLockupModel> viewModel;
@property (retain, nonatomic) NSFormatter *durationFormatter;
@property (readonly, nonatomic) double titleVisualOffset;
@property (retain, nonatomic) NSArray *selectedEpisodeModels;

+ (id)lockup;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isFlipped;
- (void)clearViewModel;
- (id)wrapIntoScroller;

@end
