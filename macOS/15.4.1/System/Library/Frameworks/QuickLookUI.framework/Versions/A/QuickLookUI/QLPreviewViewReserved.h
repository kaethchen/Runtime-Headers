@class NSURL, NSMutableDictionary, NSDate, NSPanGestureRecognizer, NSClickGestureRecognizer, QLPreviewPageNumberOverlayController, QLPreviewDragController, QLPreviewContainerView, NSSet, QLScrollController, QLPreviewCacheManager, QLPreviewOverlayController, QLPreviewPathOverlayController, NSString, NSArray, NSView, QLPreviewDocument, NSWindow;
@protocol QLDisplayable, QLPreviewItem;

@interface QLPreviewViewReserved : NSObject {
    int mode;
    BOOL showControls;
    BOOL sizesPreviewToFit;
    NSArray *viewConstraints;
    int internalState;
    BOOL isDeactivating;
    NSSet *supportedDisplayBundleIDs;
    QLPreviewCacheManager *cacheManager;
    id<QLPreviewItem> previewItem;
    BOOL allowLoadingOfUnsupportedDisplayBundleIDs;
    int transition;
    BOOL enableDragNDrop;
    BOOL handlingEvent;
    BOOL handledMouseDown;
    BOOL manageVisibilityOnOldDisplayable;
    BOOL manageVisibilityOnNewDisplayable;
    BOOL changingDisplayable;
    unsigned long long doubleClickModifierFlags;
    NSURL *appURLForNextOpening;
    id<QLDisplayable> loadingDisplayable;
    id<QLDisplayable> emptyDisplayable;
    id<QLDisplayable> genericDisplayable;
    BOOL hasCustomLoadingDisplayable;
    NSView *overlayContentView;
    id delegate;
    QLPreviewOverlayController *overlayController;
    QLScrollController *scrollController;
    QLPreviewContainerView *previewContainerView;
    QLPreviewPathOverlayController *pathOverlayController;
    QLPreviewPageNumberOverlayController *pageNumOverlayController;
    id<QLDisplayable> displayable;
    QLPreviewDocument *document;
    QLPreviewDocument *displayedDocument;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } visualMargins;
    NSMutableDictionary *userDefinedSizes;
    NSDate *timeoutDate;
    BOOL blocking;
    BOOL automaticallyMakePreviewFirstResponder;
    BOOL shouldCloseWithWindow;
    BOOL autostarts;
    BOOL showRemainingTime;
    BOOL enableRemotePreviews;
    BOOL fullLayers;
    BOOL hideLoadingSpinner;
    BOOL loadingForForceTouch;
    NSString *initialDisplayBundleID;
    struct CGSize { double width; double height; } initialThumbnailSize;
    double loadingTimeout;
    BOOL forceVisible;
    BOOL allowsAlerts;
    NSPanGestureRecognizer *dragGestureRecognizer;
    QLPreviewDragController *dragController;
    BOOL dragging;
    BOOL inHitTest;
    NSClickGestureRecognizer *doubleClickRecognizer;
    NSWindow *_windowLastMovedTo;
    id highlightObject;
    id mandatoryServer;
    id forcedContentTypeUTI;
}

- (void).cxx_destruct;

@end
