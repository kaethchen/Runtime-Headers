@class NSArray, NSMutableDictionary, NSMapTable, NSStackViewContainer, NSMutableArray, NSLayoutDimension;

@interface _NSStackViewPrivateData : NSObject {
    NSArray *views;
    NSArray *detachedViews;
    NSMutableArray *viewsDetachedWithDeferredNotifications;
    NSMutableArray *viewsReattachedWithDeferredNotifications;
    NSStackViewContainer *leadingOrTopViewsManager;
    NSStackViewContainer *centerViewsManager;
    NSStackViewContainer *trailingOrBottomViewsManager;
    long long distribution;
    NSMutableDictionary *stackConstraintsDictionary;
    NSLayoutDimension *idealSizeLayoutDimension;
    float alignmentPriority;
    NSMapTable *overriddenHoldingPriorities;
    struct { unsigned char stackViewShouldNotAddConstraints : 1; unsigned char stackViewFinishedDecoding : 1; unsigned char stackViewDecodedWantingFlatHierarchy : 1; unsigned char finishedFirstUpdateConstraintsPass : 1; unsigned int reserved : 28; } _svFlags;
}

- (void)dealloc;

@end
