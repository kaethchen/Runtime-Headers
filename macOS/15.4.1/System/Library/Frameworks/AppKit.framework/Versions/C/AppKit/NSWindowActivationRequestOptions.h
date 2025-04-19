@class NSWindow;

@interface NSWindowActivationRequestOptions : NSObject

@property long long relativeTo;
@property BOOL recalculateKeyWindow;
@property BOOL forDockMiniaturize;
@property BOOL preferConditionalOrdering;
@property BOOL allowAnimation;
@property BOOL needsSheetAnimation;
@property BOOL uninhibitedOrdering;
@property BOOL synchronizingOrderingGroupVisibility;
@property BOOL forHideUnhide;
@property (readonly, weak) NSWindow *requestingWindow;
@property (readonly) unsigned long long tileSpaceToJoin;
@property (weak) id requestor;
@property unsigned long long preferredPresentationStyle;
@property BOOL becomeKey;
@property long long orderingMode;

+ (id)windowActivationRequestOptionsWithOrderingMode:(long long)a0 relativeTo:(long long)a1;
+ (id)windowActivationRequestOptionsWithRequestor:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
