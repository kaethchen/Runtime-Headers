@class NSWorkflowsBar, NSString, _NSQuickActionProvider, _NSQuickActionTouchBarPicker, NSDictionary, NSSet, NSOperationQueue;
@protocol _NSQuickActionTouchBarControllerDelegate;

@interface _NSQuickActionTouchBarController : NSObject <_NSQuickActionTouchBarPickerDelegate, _NSQuickActionProviderObserver> {
    id<_NSQuickActionTouchBarControllerDelegate> _delegate;
    NSWorkflowsBar *_workflowsBar;
    _NSQuickActionTouchBarPicker *_mainPicker;
    _NSQuickActionTouchBarPicker *_popoverPicker;
    _NSQuickActionProvider *_provider;
    NSDictionary *_dataSourcesByQuickActionIdentifier;
    NSSet *_enabledQuickActionIdentifiers;
    NSOperationQueue *_backgroundLoadingQueue;
    void *_observationInfo;
    BOOL _isObservingWorkflowsBar;
}

@property (readonly) BOOL touchBarIsShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfTouchBarIsShowing;
+ (BOOL)automaticallyNotifiesObserversOf_popoverPicker;
+ (BOOL)automaticallyNotifiesObserversOf_workflowsBar;
+ (id)keyPathsForValuesAffectingTouchBarIsShowing;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_popoverPicker;
- (id)_workflowsBar;
- (void)cancelQuickActionTouchBarPicker:(id)a0;
- (void)dismissPopover;
- (void)enableQuickActionsWithIdentifiers:(id)a0;
- (void)quickActionTouchBarPicker:(id)a0 invokeQuickActionForItemDataSource:(id)a1;
- (void)quickActionsDidChange;
- (void)showPopover;

@end
