@interface CalendarUIKitInternal.CUIKIReminderEditorImplementation : NSObject {
    void /* unknown type, empty encoding */ undoManager;
    void /* unknown type, empty encoding */ _requestPerformer;
    void /* unknown type, empty encoding */ changeTracker;
    void /* unknown type, empty encoding */ eventStore;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ alertDisplayer;

- (id)init;
- (void).cxx_destruct;
- (void)delete:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithEventStore:(id)a0 alertDisplayer:(id)a1 undoManager:(id)a2 changeTracker:(id)a3;
- (BOOL)saveChangesToEvents:(id)a0 error:(id *)a1;

@end
