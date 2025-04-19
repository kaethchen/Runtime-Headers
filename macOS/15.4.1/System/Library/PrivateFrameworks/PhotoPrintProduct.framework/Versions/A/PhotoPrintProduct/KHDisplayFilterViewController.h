@class NSArray, NSString, SinglePixelLine, KHFilterControl, KHEditorDisplayFilter;
@protocol KHDisplayFilterViewControllerDelegate, KHAccessoryViewContainerProtocol;

@interface KHDisplayFilterViewController : UXViewController <KHAccessoryViewControllerProtocol, KHFilterControlDelegate> {
    KHEditorDisplayFilter *_delayedSelectedFilter;
    SinglePixelLine *_decorationLine;
}

@property (retain, nonatomic) KHFilterControl *filterControl;
@property (weak, nonatomic) id<KHDisplayFilterViewControllerDelegate> delegate;
@property (nonatomic) KHEditorDisplayFilter *selectedFilter;
@property (retain, nonatomic) NSArray *filters;
@property (readonly, nonatomic) unsigned long long preferredAccessoryEdge;
@property (readonly, nonatomic) double collapsedAccessoryLength;
@property (nonatomic) double expandedAccessoryLength;
@property (nonatomic) long long accessoryViewState;
@property (weak, nonatomic) id<KHAccessoryViewContainerProtocol> accessoryViewContainer;
@property (readonly, nonatomic) BOOL isAccessoryFloating;
@property (readonly, nonatomic) double minimumAccessoryLength;
@property (readonly, nonatomic) double maximumAccessoryLength;
@property (readonly, nonatomic) double accessoryAnimationDuration;
@property (readonly, nonatomic) unsigned long long accessoryAnimationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_configureAccessibility;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)initWithFilters:(id)a0;
- (void)_currentLayoutChanged:(id)a0;
- (void)_teardownAccessibility;
- (void)filterControl:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
