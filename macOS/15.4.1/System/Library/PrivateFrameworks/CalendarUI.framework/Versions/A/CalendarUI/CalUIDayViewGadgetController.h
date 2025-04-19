@class NSObject, NSSet, NSArray, EKEventStore, NSDate, CalUIDayViewGadget, NSString;
@protocol OS_dispatch_queue, CalUIDayViewGadgetAppearanceDelegate;

@interface CalUIDayViewGadgetController : NSViewController <CalUIDayViewGadgetDataSource> {
    CalUIDayViewGadget *_view;
    NSArray *_internalPreviewEvents;
    NSArray *_timedEvents;
    NSArray *_allDayEvents;
    NSObject<OS_dispatch_queue> *_loadEventsSerialQueue;
}

@property (retain) NSSet *disabledCalendars;
@property (readonly, nonatomic) NSDate *startOfDay;
@property (readonly, nonatomic) NSDate *endOfDay;
@property (readonly, nonatomic) NSArray *timedEvents;
@property (readonly, nonatomic) NSArray *allDayEvents;
@property (retain) NSDate *lastRefresh;
@property (retain) EKEventStore *eventStore;
@property (retain) CalUIDayViewGadget *dayViewGadget;
@property (retain) NSArray *internalPreviewEvents;
@property (retain) NSArray *dedupedPreviewEvents;
@property (readonly, weak, nonatomic) id<CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) NSDate *dayOfInterest;
@property (weak, nonatomic) id /* block */ mouseDownBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithEventStore:(id)a0;
- (BOOL)isPreviewEvent:(id)a0;
- (void)setTimedEvents:(id)a0;
- (void)calendarChanged:(id)a0;
- (void)calendarsChangedNotification;
- (void)disabledCalendarsChanged:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 eventStore:(id)a2;
- (void)loadEventsWithPreviewEvents:(id)a0;
- (void)localeChanged:(id)a0;
- (void)prepareForLoadingEvents;
- (id)previewEvents;
- (void)refreshAsync;
- (void)refreshShouldForceDisplay:(BOOL)a0;
- (void)setAllDayEvents:(id)a0;
- (void)setPreviewEvents:(id)a0;
- (void)setupWithAppearanceDelegate:(id)a0;
- (void)setupWithAppearanceDelegate:(id)a0 mouseDownBlock:(id /* block */)a1;
- (void)sizeChanged;

@end
