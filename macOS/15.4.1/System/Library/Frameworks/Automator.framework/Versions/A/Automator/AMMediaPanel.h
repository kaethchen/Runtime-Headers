@class ILMediaBrowserView, NSArray, NSPointerArray, NSString, NSSegmentedControl;

@interface AMMediaPanel : NSWindowController <NSWindowDelegate>

@property (class, readonly, nonatomic) AMMediaPanel *sharedMediaPanel;

@property (weak) NSSegmentedControl *_segmentedControl;
@property (weak) ILMediaBrowserView *_mediaBrowserView;
@property (retain) NSPointerArray *observers;
@property (readonly, nonatomic) NSArray *selectedMediaObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisplayMediaGroup:(id)a0;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)awakeFromNib;
- (void)showWindow:(id)a0;
- (void)togglePanel:(id)a0;
- (id)windowNibName;
- (void)windowWillClose:(id)a0;
- (BOOL)mediaBrowserView:(id)a0 shouldDisplayMediaGroup:(id)a1;
- (void)displayAudioBrowser:(id)a0;
- (void)displayImageBrowser:(id)a0;
- (void)displayMovieBrowser:(id)a0;
- (void)selectMediaType:(id)a0;

@end
