@class NSKeyValueDependencyContext, NSMapTable, NSMutableArray;

@interface __NSAppKitThreadSpecificData : NSObject {
    void *NSPThreadSelf;
    id NSCurrentGraphicsContext;
    id NSCGSContextThreadStateStack;
    id NSCurrentAppearance;
    id NSThreadFocusState;
    id NSThreadFocusStack;
    id NSCurrentNibLocalizedStringsBundles;
    id NSGlyphGeneratorCache;
    id NSActionCellReplacementString;
    struct _NSRange { unsigned long long location; unsigned long long length; } NSActionCellSelectionRange;
    id NSAlertCache;
    id NSCurrentDisplayCycle;
    unsigned int NSCurrentDisplayCycleTransactionSeed;
    id NSDisplayOperationStack;
    id NSPeriodicEventSource;
    id NSOriginalVersionDocument;
    id NSCurrentDocumentVersion;
    long long NSLockCount;
    id NSCurrentPrintOperation;
    id NSPrintInfoStorage;
    unsigned long long NSCachedTitleCellMask;
    id NSCachedTitleCellTitle;
    struct CGSize { double width; double height; } NSCachedTitleCellSize;
    id NSCurrentNibLoadingBundles;
    id NSCurrentNibPaths;
    void *NSStringDrawingTextStorageSettings;
    id NSCurrentOpenGLContext;
    NSMapTable *NSWindowDisableFlushCounts;
    long long NSThreadSequenceNumber;
    NSKeyValueDependencyContext *NSCurrentKeyValueDependencyContext;
    NSMutableArray *NSKeyValueDependencyContextStack;
    unsigned int NSCriticalWaitTimer;
    BOOL NSAutoreleasePoolIsInstalled;
}

- (id)init;

@end
