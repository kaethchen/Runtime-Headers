@class NSMutableDictionary, NSObject, NSMenuItem, NSTouchBar, NSMutableArray, NSDocumentControllerPersistentRestoration, NSDocumentControllerSubMenuDelegate, NSString, NSSharingServicePicker, NSOperationQueue, NSArray, NSWindow, NSMutableSet, NSDocument;
@protocol OS_dispatch_queue;

@interface NSDocumentControllerMoreIVars : NSObject {
    BOOL shouldCreateUI;
    double autosavingDelay;
    int cachedUTIUsage;
    NSDocumentControllerSubMenuDelegate *subMenuDelegate;
    unsigned long long isAutoreopening;
    NSArray *autoreopenRecordsBeingReopened;
    NSMutableArray *autoreopenRecordsForMissingDocuments;
    BOOL hasAutoreopened;
    BOOL isClosingBeforeSavingDuringTermination;
    BOOL isClosingAfterSavingDuringTermination;
    NSMutableArray *autoreopenRecordsBeingCollectedDuringTermination;
    BOOL autoreopenRecordsNeedRewritingDuringTermination;
    BOOL isAsyncOpeningOrPrinting;
    id /* block */ asyncOpeningOrPrintingWaiter;
    NSArray *batchedOpenings;
    BOOL batchedOpeningTriedToReopen;
    NSMutableDictionary *documentOpeningWaitersByURL;
    NSMutableArray *autoreopenRecordsAlreadyReopenedByTAL;
    NSString *untitledTypeToCreate;
    NSWindow *windowThatBecameKeyDuringOpening;
    BOOL appIsBecomingActiveDuringOpening;
    id appWillBecomeActiveObserver;
    id windowDidBecomeKeyObserver;
    id appDidBecomeActiveObserver;
    BOOL appIsResigningActiveDuringOpening;
    id appWillResignActiveObserver;
    id windowDidResignKeyObserver;
    id appDidResignActiveObserver;
    NSObject<OS_dispatch_queue> *mainThreadUnblockingQueue;
    NSMutableArray *mainThreadUnblockerStack;
    NSMutableArray *mainThreadBlockingInterrupters;
    NSDocumentControllerPersistentRestoration *restorationInfo;
    BOOL dontDisplayDuringReopening;
    NSMutableSet *reservedAutosavingContentsPaths;
    NSDocument *documentBeingDuplicated;
    NSOperationQueue *documentCoordinatingQueue;
    NSOperationQueue *documentOpeningQueue;
    NSMutableArray *documentsStillPreservingVersions;
    NSMutableSet *openRecentDocumentIDs;
    NSOperationQueue *openRecentDocumentUpdatingQueue;
    BOOL requestingSecurityScopedURLsFromOpenPanel;
    BOOL shouldInvertImplicitTabbingBehavior;
    BOOL tabPlusButtonWasClicked;
    NSTouchBar *newDocumentTouchBar;
    BOOL showNewDocumentTouchBar;
    NSSharingServicePicker *currentSharingServicePicker;
    NSMenuItem *selectedSharingServiceMenuItem;
}

- (void).cxx_destruct;

@end
