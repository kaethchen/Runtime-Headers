@class ATXHomeScreenWidgetFeedback, BPSPublisher, ATXHomeScreenEvent;

@interface ATXHomeScreenWidgetFeedbackProcessor : NSObject {
    ATXHomeScreenWidgetFeedback *_widgetFeedback;
    BPSPublisher *_publisher;
    ATXHomeScreenEvent *_lastPageAppearEvent;
}

+ (BOOL)_shouldProcessEvent:(id)a0;
+ (id)_retrieveLastHistogramUpdateDate;
+ (void)_storeLastHistogramUpdateDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addToHistogramForWidgetsInEvent:(id)a0 type:(unsigned long long)a1;
- (void)_updateHistogramForEvent:(id)a0;
- (id)initWithWidgetFeedback:(id)a0 publisher:(id)a1;
- (void)updateHistogramsForRecentHomeScreenEvents;

@end
