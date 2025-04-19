@class NSArray;
@protocol WOWidgetObservationControllerDelegate;

@interface WOWidgetObservationController : NSObject {
    void /* unknown type, empty encoding */ _proxy;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _all;
    void /* unknown type, empty encoding */ _pendingChanges;
    void /* unknown type, empty encoding */ _sem;
    void /* unknown type, empty encoding */ _isDragging;
    void /* unknown type, empty encoding */ _hasPendingSignificantWidgetChange;
}

@property (nonatomic, retain) id<WOWidgetObservationControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *all;
@property (nonatomic, readonly) BOOL isDragging;

- (id)init;
- (void).cxx_destruct;
- (void)requestAllWidgetsWithCompletionHandler:(id /* block */)a0;
- (void)showAddWidgetsSheet;

@end
