@class PXContentPrivacyController, NSString, NSUndoManager, NSTimer;

@interface PXUndoActionsInvalidator : NSObject <PXChangeObserver>

@property (retain, nonatomic) NSUndoManager *undoManager;
@property (retain, nonatomic) PXContentPrivacyController *privacyController;
@property (nonatomic, getter=isObservingApplicationState) BOOL observingApplicationState;
@property (nonatomic) BOOL applicationIsActive;
@property (retain, nonatomic) NSTimer *undoClearingTimer;
@property (nonatomic) BOOL timerDidClearUndoStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearUndoStack;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)beginObservingSystemEventsForAutomaticInvalidation;
- (void)clearUndoClearingTimer;
- (id)initWithUndoManager:(id)a0 privacyController:(id)a1;
- (void)invalidateUndoTimerIfNeeded;
- (void)startUndoClearingTimer;
- (void)stopObservingSystemEventsForAutomaticInvalidation;
- (void)undoClearingTimerFired;

@end
