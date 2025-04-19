@class NSArray;
@protocol HKSPWidgetRelevanceController, NAScheduler, HKSPSleepWidgetManagerDelegate;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) id<HKSPWidgetRelevanceController> relevanceController;
@property (readonly, nonatomic) id<NAScheduler> chsScheduler;
@property (weak, nonatomic) id<HKSPSleepWidgetManagerDelegate> delegate;

+ (BOOL)_shouldForceWidgetReload:(unsigned long long)a0;
+ (id)_widgetReloadDescription:(unsigned long long)a0;
+ (id)defaultRelevanceController;
+ (id)defaultTimelineControllers;
+ (id)widgetBundleIdentifierForCurrentDevice;
+ (id)widgetContainerBundleIdentifierForCurrentDevice;
+ (id)widgetKinds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTimelineControllers:(id)a0 relevanceController:(id)a1;
- (void)invalidateRelevances;
- (void)reloadWidgetsWithReason:(unsigned long long)a0;

@end
