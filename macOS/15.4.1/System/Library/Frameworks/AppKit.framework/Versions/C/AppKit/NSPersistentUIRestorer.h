@class NSPersistentUIRestorationCrashDataHandler, NSArray, NSPersistentUISecureURLHerder, NSMutableDictionary, NSMutableArray;

@interface NSPersistentUIRestorer : NSObject {
    BOOL _performingWindowOrdering;
    BOOL _suppressedCGWindowOrderingSuccessfully;
    int _suppressedCGWindowOrderingStatus;
    NSMutableArray *_windowRestorations;
    NSMutableDictionary *_windowRestorationsByWindowID;
}

@property (retain) NSPersistentUIRestorationCrashDataHandler *restorationCrashDataHandler;
@property (retain, nonatomic, setter=setURLHerder:) NSPersistentUISecureURLHerder *urlHerder;
@property (readonly) BOOL hasFinishedRestoringWindows;
@property (copy) NSArray *previousSpaceOrder;

- (void).cxx_destruct;
- (id)_debugUnrestoredWindows;
- (void)_finishedRestoringWindowsWithZOrder:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_tearDownStateRestorationApparatusAndResumeWindowOrderingWithRestorationOptions:(id)a0;
- (void)acquireTalagentWindowDictionaries;
- (void)delayCGWindowOrderingIfNecessary;
- (void)ignoreAnyPreexistingPersistentState;
- (void)invokeRestoration:(id)a0;
- (void)jettisonTalagentWindowsWithCompletionHandler:(id /* block */)a0;
- (id)mungeFullScreenWindowsReturningTheirWindowNumbers;
- (void)orderRestoredWindows;
- (BOOL)performingWindowOrdering;
- (void)pickKeyAndMainWindows;
- (void)populateEncodedReferenceToResponders;
- (void)populateWindowRestorationsByWindowID;
- (BOOL)promptToIgnorePersistentStateWithCrashHistory:(id)a0;
- (id)restorationForWindowID:(id)a0;
- (void)restoreStateFromRecords:(id)a0 requireSecureCoding:(BOOL)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)resumeNormalWindowOrderingAndDrawingWithRestorationOptions:(id)a0;
- (BOOL)shouldUseOneWindowHeuristic;
- (void)sortRestorationsByZOrder:(id)a0;

@end
