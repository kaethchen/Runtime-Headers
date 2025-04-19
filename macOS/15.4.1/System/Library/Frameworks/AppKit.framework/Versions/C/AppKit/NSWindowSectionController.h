@class NSTrackingSeparatorToolbarItem, NSArray, NSWindowSectionControllerBoundingDivider, NSMutableArray, NSWindow;

@interface NSWindowSectionController : NSObject {
    NSMutableArray *_contentControllers;
    NSMutableArray *_pendingRegistrationQueue;
    NSMutableArray *_pendingScrollViewRegistrationQueue;
    NSMutableArray *_pendingSplitViewItemRegistrationQueue;
    NSWindowSectionControllerBoundingDivider *_leftItem;
    NSWindowSectionControllerBoundingDivider *_rightItem;
    NSTrackingSeparatorToolbarItem *_systemSidebarItem;
    NSTrackingSeparatorToolbarItem *_customSidebarItem;
    NSTrackingSeparatorToolbarItem *_systemTrailingSidebarItem;
    NSTrackingSeparatorToolbarItem *_customTrailingSidebarItem;
    BOOL _fullHeightDividersDisabled;
    BOOL _fullHeightSidebarDividersDisabled;
    BOOL _updatingRegistrations;
    BOOL _checkingAbandonedContentControllers;
    NSWindow *_window;
}

@property (weak) NSWindow *window;
@property BOOL fullHeightDividersDisabled;
@property BOOL fullHeightSidebarDividersDisabled;
@property (readonly) NSArray *contentControllers;
@property double boundingWidth;

+ (double)leadingPartitionPositionForItem:(id)a0 inWindow:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_addPendingRegistration:(id)a0;
- (void)_addPendingScrollViewRegistration:(id)a0;
- (void)_addPendingSplitViewItemRegistration:(id)a0;
- (BOOL)_attemptToRegisterScrollViewSeparatorTrackingAdapter:(id)a0;
- (BOOL)_attemptToRegisterSeparator:(id)a0;
- (BOOL)_attemptToRegisterSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)_checkForAbandonedContentControllers;
- (BOOL)_doesAdapterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 meetCriteriaForRegistrationWithSectionController:(id)a1 forWindow:(id)a2;
- (BOOL)_doesAdapterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 meetCriteriaForRegistrationWithSectionController:(id)a1 forWindow:(id)a2 strict:(BOOL)a3;
- (void)_insertContentController:(id)a0 atIndex:(long long)a1;
- (BOOL)_isSplitAdapter:(id)a0 restrictedFromRegisteringWith:(id)a1;
- (id)_registeredSeparatorItemEqualToAdapter:(id)a0;
- (void)_removeContentController:(id)a0;
- (void)_removePendingRegistration:(id)a0;
- (void)_removePendingScrollViewRegistration:(id)a0;
- (void)_removePendingSplitViewItemRegistration:(id)a0;
- (void)_unsetAndPendAdaptersForControllerIfNecessary:(id)a0;
- (void)_updatePendingRegistrations;
- (id)_windowForAdapter:(id)a0;
- (void)controller:(id)a0 itemDividerIndexChanged:(id)a1;
- (BOOL)registerScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)registerSeparator:(id)a0;
- (void)registerSidebar:(id)a0;
- (void)registerSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)registerTrailingSidebar:(id)a0;
- (void)unregisterScrollViewSeparatorTrackingAdapter:(id)a0;
- (void)unregisterSeparator:(id)a0;
- (void)unregisterSidebar:(id)a0;
- (void)unregisterSplitViewItemSeparatorTrackingAdapter:(id)a0;
- (void)unregisterTrailingSidebar:(id)a0;

@end
