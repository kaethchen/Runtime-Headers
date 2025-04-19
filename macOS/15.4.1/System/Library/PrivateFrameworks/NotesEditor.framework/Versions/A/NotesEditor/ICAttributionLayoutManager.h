@class NSDate, ICTTTextEditGrouper, NSArray, NSManagedObjectContext, ICMacBaseTextView, ICTTTextEditFilter, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface ICAttributionLayoutManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (copy, nonatomic) NSArray *viewConfigurations;
@property (readonly, nonatomic) NSArray *visibleConfigurations;
@property (retain, nonatomic) ICTTTextEditGrouper *editGrouper;
@property (nonatomic) double currentTextViewOffset;
@property (nonatomic) double appliedHorizontalAdjustment;
@property (readonly, copy, nonatomic) NSDate *noteLastOpenedDate;
@property (readonly, weak, nonatomic) ICMacBaseTextView *textView;
@property (copy, nonatomic) ICTTTextEditFilter *filter;
@property (nonatomic) double panelWidth;
@property (nonatomic) double previewPanelWidth;
@property (nonatomic) double visiblePanelWidth;
@property (copy, nonatomic) NSNumber *overrideZoomFactor;
@property (readonly, nonatomic) double appliedHorizontalAdjustmentRatio;
@property (readonly, nonatomic) double preferredHighlightValue;
@property (copy, nonatomic) id /* block */ updatedConfigurationHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)scrollBoundsDidChange:(id)a0;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithTextView:(id)a0 managedObjectContext:(id)a1 panelWidth:(double)a2 previewPanelWidth:(double)a3;
- (void)reloadConfigurationsWithCompletion:(id /* block */)a0;
- (void)reloadViewConfigurationsSynchronously;
- (void)updateViewConfigurationsForTextViewOffset;

@end
