@class NSMenu, NSString, NSArray, NSTouchBar, NSUserActivity, NSPersistentUIEncodedReference, NSPointerArray, NSKeyValueDependencyInfo;
@protocol NSServicesRequestor, _NSQuickActionItemSource, NSPersistentUITopLevelContainer;

@interface NSResponder : NSObject <_NSQuickActionItemSource, NSTouchBarProvider, NSPersistentUIEncodable, NSUIActivityProvider, NSTouchBarProviderContainer, NSDynamicPropertyContainer, NSCoding> {
    id _nextResponder;
    NSKeyValueDependencyInfo *_dependencyInfo;
    NSPointerArray *_respondersWeAreNextFor;
}

@property (class, readonly, copy) NSArray *restorableStateKeyPaths;
@property (class, readonly, copy) NSArray *restorableStateKeyPaths;

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSResponder *_hostedFirstResponder;
@property (readonly) NSString *_responderDebugDescription;
@property (retain) NSUserActivity *userActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<NSPersistentUITopLevelContainer> _persistentUIWindow;
@property (readonly, copy) NSArray *_persistentUIChildren;
@property (readonly, copy) NSString *_persistentUIIdentifier;
@property (setter=_setHasInvalidRestorableState:) BOOL _hasInvalidRestorableState;
@property (readonly) BOOL _hasEverHadInvalidRestorableState;
@property (readonly, copy) NSPersistentUIEncodedReference *_persistentUIEncodedReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<NSServicesRequestor> servicesRequestor;
@property (readonly, weak) id<NSServicesRequestor> servicesRequestor;
@property (readonly) id<_NSQuickActionItemSource> additionalQuickActionItemSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property NSResponder *nextResponder;
@property (readonly) BOOL acceptsFirstResponder;
@property (retain) NSMenu *menu;
@property (retain) NSKeyValueDependencyInfo *dependencyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)allowedClassesForRestorableStateKeyPath:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfServicesRequestor;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
+ (BOOL)automaticallyTracksDependenciesOnValueForKey:(id)a0;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)userActivityWasContinued:(id)a0;
- (id)NS_touchBarProviders;
- (id)_eventResponderChainDescription;
- (id)accessibilityLastContentSibling;
- (id)accessibilityNextContentSibling;
- (id)accessibilitySelectedTextRanges;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (BOOL)isAccessibilityAutoInteractable;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (void)noResponderFor:(SEL)a0;
- (void)otherMouseDown:(id)a0;
- (void)setAccessibilityDisclosedByRow:(id)a0;
- (void)setAccessibilityOverflowButton:(id)a0;
- (void)setAccessibilityVisibleColumns:(id)a0;
- (id)NS_touchBarProvidersKeyPaths;
- (id)accessibilityCellForColumn:(long long)a0 row:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityHeaderForRowIndex:(long long)a0;
- (long long)accessibilityNumberOfCharacters;
- (BOOL)isAccessibilityProtectedContent;
- (void)rightMouseDown:(id)a0;
- (void)setAccessibilityCustomChoosers:(id)a0;
- (void)setAccessibilityMinimizeButton:(id)a0;
- (void)setAccessibilityTitleUIElement:(id)a0;
- (void)swipeWithEvent:(id)a0;
- (id)_accessibilityLabel;
- (void)_addDependencyOnValueForKey:(id)a0;
- (void)_becomeCurrentUserActivityIfNecessary;
- (void)_changePersistentKeyPathObservationTo:(BOOL)a0;
- (void)_cleanUpUserActivity;
- (void)_dealloc;
- (void)_didRestoreUserActivity:(id)a0;
- (void)_encodeObjectIntoRestorableState:(id)a0 forKey:(id)a1;
- (id)_firstResponderForEvent:(id)a0;
- (BOOL)_hasDependent:(id)a0 forKey:(id)a1 currentlyValid:(BOOL *)a2;
- (BOOL)_ignoreBadFirstResponders;
- (void)_invalidateDependenciesOnValueForKey:(id)a0;
- (void)_markAsEverHavingInvalidRestorableState;
- (id)_nextResponderForEvent:(id)a0;
- (void)_noResponderFor:(SEL)a0 duringForwardingOfEvent:(id)a1;
- (unsigned int)_persistentUIWindowID;
- (void)_postEventNotification:(id)a0;
- (void)_postEventNotification:(id)a0 fromCell:(id)a1;
- (id)_recursiveResponderThatWantsForwardedScrollEventsForAxis:(long long)a0 intendedForSwipe:(BOOL *)a1;
- (BOOL)_recursiveWantsForwardedScrollEventsForAxis:(long long)a0;
- (void)_recursivelyReinvalidateRestorableStateIfNecessary;
- (void)_restorePersistentState:(id)a0;
- (void)_setShouldPostEventNotifications:(BOOL)a0;
- (BOOL)_shouldPostEventNotifications;
- (void)_touchesBeganWithEvent:(id)a0;
- (void)_touchesCancelledWithEvent:(id)a0;
- (void)_touchesEndedWithEvent:(id)a0;
- (void)_touchesMovedWithEvent:(id)a0;
- (BOOL)_wantsKeyDownForEvent:(id)a0;
- (BOOL)_wantsTouchesForEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityAllowedValues;
- (id)accessibilityApplicationFocusedUIElement;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityAttributedUserInputLabels;
- (id)accessibilityAuditIssues;
- (id)accessibilityCancelButton;
- (id)accessibilityChartDescriptor;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityClearButton;
- (id)accessibilityCloseButton;
- (long long)accessibilityColumnCount;
- (id)accessibilityColumnHeaderUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnIndexRange;
- (id)accessibilityColumnTitles;
- (id)accessibilityColumns;
- (long long)accessibilityContainerType;
- (id)accessibilityContentSiblingAbove;
- (id)accessibilityContentSiblingBelow;
- (id)accessibilityContents;
- (id)accessibilityCriticalValue;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomChoosers;
- (id)accessibilityCustomContent;
- (id)accessibilityCustomRotors;
- (id)accessibilityDecrementButton;
- (id)accessibilityDefaultButton;
- (id)accessibilityDisclosedByRow;
- (id)accessibilityDisclosedRows;
- (long long)accessibilityDisclosureLevel;
- (id)accessibilityDocument;
- (id)accessibilityEmbeddedImageDescription;
- (id)accessibilityExtrasMenuBar;
- (id)accessibilityFilename;
- (id)accessibilityFirstContentSibling;
- (id)accessibilityFocusedWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityFullScreenButton;
- (id)accessibilityFunctionRowTopLevelElements;
- (id)accessibilityGrowArea;
- (id)accessibilityHandles;
- (id)accessibilityHeader;
- (id)accessibilityHeaderForColumnIndex:(long long)a0;
- (id)accessibilityHeaderGroup;
- (id)accessibilityHelp;
- (id)accessibilityHorizontalScrollBar;
- (id)accessibilityHorizontalUnitDescription;
- (long long)accessibilityHorizontalUnits;
- (id)accessibilityIdentifier;
- (id)accessibilityIncrementButton;
- (long long)accessibilityIndex;
- (long long)accessibilityInsertionPointLineNumber;
- (id)accessibilityLabel;
- (id)accessibilityLabelUIElements;
- (float)accessibilityLabelValue;
- (struct CGPoint { double x0; double x1; })accessibilityLayoutPointForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })accessibilityLayoutSizeForScreenSize:(struct CGSize { double x0; double x1; })a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (id)accessibilityLinkedUIElements;
- (id)accessibilityMainWindow;
- (id)accessibilityMarkerGroupUIElement;
- (id)accessibilityMarkerTypeDescription;
- (id)accessibilityMarkerUIElements;
- (id)accessibilityMarkerValues;
- (id)accessibilityMaxValue;
- (id)accessibilityMenuBar;
- (id)accessibilityMinValue;
- (id)accessibilityMinimizeButton;
- (id)accessibilityNextContents;
- (long long)accessibilityOrientation;
- (id)accessibilityOverflowButton;
- (BOOL)accessibilityOverridesAlwaysTakePrecedence;
- (id)accessibilityParent;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformCancel;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPreferredLanguage;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityPreviousContents;
- (id)accessibilityProxy;
- (id)accessibilityRTFForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityResultsForSearchPredicate:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilityRowHeaderUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowIndexRange;
- (id)accessibilityRows;
- (long long)accessibilityRulerMarkerType;
- (struct CGPoint { double x0; double x1; })accessibilityScreenPointForLayoutPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })accessibilityScreenSizeForLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilitySearchButton;
- (id)accessibilitySearchMenu;
- (id)accessibilitySections;
- (id)accessibilitySelectedCells;
- (id)accessibilitySelectedChildren;
- (id)accessibilitySelectedColumns;
- (id)accessibilitySelectedRows;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (id)accessibilityServesAsTitleForUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySharedCharacterRange;
- (id)accessibilitySharedFocusElements;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityShownMenu;
- (long long)accessibilitySortDirection;
- (id)accessibilitySplitters;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityStyleRangeForIndex:(long long)a0;
- (id)accessibilitySubrole;
- (id)accessibilityTabs;
- (id)accessibilityTitle;
- (id)accessibilityTitleUIElement;
- (id)accessibilityToolbarButton;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityURL;
- (id)accessibilityUnitDescription;
- (long long)accessibilityUnits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)accessibilityValueDescription;
- (id)accessibilityVerticalScrollBar;
- (id)accessibilityVerticalUnitDescription;
- (long long)accessibilityVerticalUnits;
- (id)accessibilityVisibleCells;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)accessibilityVisibleChildren;
- (id)accessibilityVisibleColumns;
- (id)accessibilityVisibleRows;
- (id)accessibilityWarningValue;
- (id)accessibilityWindow;
- (id)accessibilityWindows;
- (id)accessibilityZoomButton;
- (BOOL)becomeFirstResponder;
- (void)beginGestureWithEvent:(id)a0;
- (void)changeModeWithEvent:(id)a0;
- (id)colorFactory;
- (void)contextMenuKeyDown:(id)a0;
- (void)cursorUpdate:(id)a0;
- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;
- (void)doCommandBySelector:(SEL)a0;
- (void)encodeRestorableStateWithCoder:(id)a0 backgroundQueue:(id)a1;
- (void)endGestureWithEvent:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)flushBufferedKeyEvents;
- (unsigned long long)gestureEventMask;
- (void)helpRequested:(id)a0;
- (void)insertText:(id)a0;
- (unsigned long long)interfaceStyle;
- (void)interpretKeyEvents:(id)a0;
- (void)invalidateRequestor;
- (void)invalidateRestorableState;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)isAccessibilityDisclosed;
- (BOOL)isAccessibilityEdited;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityEnhancedUserInterface;
- (BOOL)isAccessibilityExpanded;
- (BOOL)isAccessibilityFocused;
- (BOOL)isAccessibilityFrontmost;
- (BOOL)isAccessibilityHidden;
- (BOOL)isAccessibilityMain;
- (BOOL)isAccessibilityMimicNativeView;
- (BOOL)isAccessibilityMinimized;
- (BOOL)isAccessibilityModal;
- (BOOL)isAccessibilityOrderedByRow;
- (BOOL)isAccessibilityRequired;
- (BOOL)isAccessibilitySelected;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (id)makeTouchBar;
- (void)mouseCancelledWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)navigateWithEvent:(id)a0;
- (id)ns_widgetType;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)performMnemonic:(id)a0;
- (BOOL)presentError:(id)a0;
- (void)presentError:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didPresentSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)presentationWindowForError:(id)a0 originatedInWindow:(id)a1;
- (void)pressureChangeWithEvent:(id)a0;
- (id)quickAction:(id)a0 anchoringViewForRequestor:(id)a1 showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 preferredEdge:(unsigned long long *)a3;
- (void)quickAction:(id)a0 didFailWithRequestor:(id)a1 error:(id)a2;
- (id)quickAction:(id)a0 sourceWindowForRequestor:(id)a1;
- (void)quickLookPreviewItemsAtWindowLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)quickLookWithEvent:(id)a0;
- (BOOL)resignFirstResponder;
- (void)restoreStateWithCoder:(id)a0;
- (void)restoreUserActivityState:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAccessibilityAllowedValues:(id)a0;
- (void)setAccessibilityAlternateUIVisible:(BOOL)a0;
- (void)setAccessibilityApplicationFocusedUIElement:(id)a0;
- (void)setAccessibilityAttributedUserInputLabels:(id)a0;
- (void)setAccessibilityAuditIssues:(id)a0;
- (void)setAccessibilityAutoInteractable:(BOOL)a0;
- (void)setAccessibilityCancelButton:(id)a0;
- (void)setAccessibilityChartDescriptor:(id)a0;
- (void)setAccessibilityChildren:(id)a0;
- (void)setAccessibilityChildrenInNavigationOrder:(id)a0;
- (void)setAccessibilityClearButton:(id)a0;
- (void)setAccessibilityCloseButton:(id)a0;
- (void)setAccessibilityColumnCount:(long long)a0;
- (void)setAccessibilityColumnHeaderUIElements:(id)a0;
- (void)setAccessibilityColumnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilityColumnTitles:(id)a0;
- (void)setAccessibilityColumns:(id)a0;
- (void)setAccessibilityContainerType:(long long)a0;
- (void)setAccessibilityContentSiblingAbove:(id)a0;
- (void)setAccessibilityContentSiblingBelow:(id)a0;
- (void)setAccessibilityContents:(id)a0;
- (void)setAccessibilityCriticalValue:(id)a0;
- (void)setAccessibilityCustomActions:(id)a0;
- (void)setAccessibilityCustomContent:(id)a0;
- (void)setAccessibilityCustomRotors:(id)a0;
- (void)setAccessibilityDecrementButton:(id)a0;
- (void)setAccessibilityDefaultButton:(id)a0;
- (void)setAccessibilityDisclosed:(BOOL)a0;
- (void)setAccessibilityDisclosedRows:(id)a0;
- (void)setAccessibilityDisclosureLevel:(long long)a0;
- (void)setAccessibilityDocument:(id)a0;
- (void)setAccessibilityEdited:(BOOL)a0;
- (void)setAccessibilityElement:(BOOL)a0;
- (void)setAccessibilityEmbeddedImageDescription:(id)a0;
- (void)setAccessibilityEnabled:(BOOL)a0;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)a0;
- (void)setAccessibilityExpanded:(BOOL)a0;
- (void)setAccessibilityExtrasMenuBar:(id)a0;
- (void)setAccessibilityFilename:(id)a0;
- (void)setAccessibilityFirstContentSibling:(id)a0;
- (void)setAccessibilityFocused:(BOOL)a0;
- (void)setAccessibilityFocusedWindow:(id)a0;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityFrontmost:(BOOL)a0;
- (void)setAccessibilityFullScreenButton:(id)a0;
- (void)setAccessibilityFunctionRowTopLevelElements:(id)a0;
- (void)setAccessibilityGrowArea:(id)a0;
- (void)setAccessibilityHandles:(id)a0;
- (void)setAccessibilityHeader:(id)a0;
- (void)setAccessibilityHeaderGroup:(id)a0;
- (void)setAccessibilityHelp:(id)a0;
- (void)setAccessibilityHidden:(BOOL)a0;
- (void)setAccessibilityHorizontalScrollBar:(id)a0;
- (void)setAccessibilityHorizontalUnitDescription:(id)a0;
- (void)setAccessibilityHorizontalUnits:(long long)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAccessibilityIncrementButton:(id)a0;
- (void)setAccessibilityIndex:(long long)a0;
- (void)setAccessibilityInsertionPointLineNumber:(long long)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityLabelUIElements:(id)a0;
- (void)setAccessibilityLabelValue:(float)a0;
- (void)setAccessibilityLastContentSibling:(id)a0;
- (void)setAccessibilityLinkedUIElements:(id)a0;
- (void)setAccessibilityMain:(BOOL)a0;
- (void)setAccessibilityMainWindow:(id)a0;
- (void)setAccessibilityMarkerGroupUIElement:(id)a0;
- (void)setAccessibilityMarkerTypeDescription:(id)a0;
- (void)setAccessibilityMarkerUIElements:(id)a0;
- (void)setAccessibilityMarkerValues:(id)a0;
- (void)setAccessibilityMaxValue:(id)a0;
- (void)setAccessibilityMenuBar:(id)a0;
- (void)setAccessibilityMimicNativeView:(BOOL)a0;
- (void)setAccessibilityMinValue:(id)a0;
- (void)setAccessibilityMinimized:(BOOL)a0;
- (void)setAccessibilityModal:(BOOL)a0;
- (void)setAccessibilityNextContents:(id)a0;
- (void)setAccessibilityNumberOfCharacters:(long long)a0;
- (void)setAccessibilityOrderedByRow:(BOOL)a0;
- (void)setAccessibilityOrientation:(long long)a0;
- (void)setAccessibilityOverridesAlwaysTakePrecedence:(BOOL)a0;
- (void)setAccessibilityParent:(id)a0;
- (void)setAccessibilityPath:(id)a0;
- (void)setAccessibilityPlaceholderValue:(id)a0;
- (void)setAccessibilityPreferredLanguage:(id)a0;
- (void)setAccessibilityPreviousContents:(id)a0;
- (void)setAccessibilityProtectedContent:(BOOL)a0;
- (void)setAccessibilityProxy:(id)a0;
- (void)setAccessibilityRequired:(BOOL)a0;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (void)setAccessibilityRowCount:(long long)a0;
- (void)setAccessibilityRowHeaderUIElements:(id)a0;
- (void)setAccessibilityRowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilityRows:(id)a0;
- (void)setAccessibilityRulerMarkerType:(long long)a0;
- (void)setAccessibilitySearchButton:(id)a0;
- (void)setAccessibilitySearchMenu:(id)a0;
- (void)setAccessibilitySections:(id)a0;
- (void)setAccessibilitySelected:(BOOL)a0;
- (void)setAccessibilitySelectedCells:(id)a0;
- (void)setAccessibilitySelectedChildren:(id)a0;
- (void)setAccessibilitySelectedColumns:(id)a0;
- (void)setAccessibilitySelectedRows:(id)a0;
- (void)setAccessibilitySelectedText:(id)a0;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilitySelectedTextRanges:(id)a0;
- (void)setAccessibilityServesAsTitleForUIElements:(id)a0;
- (void)setAccessibilitySharedCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilitySharedFocusElements:(id)a0;
- (void)setAccessibilitySharedTextUIElements:(id)a0;
- (void)setAccessibilityShownMenu:(id)a0;
- (void)setAccessibilitySortDirection:(long long)a0;
- (void)setAccessibilitySplitters:(id)a0;
- (void)setAccessibilitySubrole:(id)a0;
- (void)setAccessibilityTabs:(id)a0;
- (void)setAccessibilityTitle:(id)a0;
- (void)setAccessibilityToolbarButton:(id)a0;
- (void)setAccessibilityTopLevelUIElement:(id)a0;
- (void)setAccessibilityURL:(id)a0;
- (void)setAccessibilityUnitDescription:(id)a0;
- (void)setAccessibilityUnits:(long long)a0;
- (void)setAccessibilityUserInputLabels:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (void)setAccessibilityValueDescription:(id)a0;
- (void)setAccessibilityVerticalScrollBar:(id)a0;
- (void)setAccessibilityVerticalUnitDescription:(id)a0;
- (void)setAccessibilityVerticalUnits:(long long)a0;
- (void)setAccessibilityVisibleCells:(id)a0;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (void)setAccessibilityVisibleRows:(id)a0;
- (void)setAccessibilityWarningValue:(id)a0;
- (void)setAccessibilityWindow:(id)a0;
- (void)setAccessibilityWindows:(id)a0;
- (void)setAccessibilityZoomButton:(id)a0;
- (void)setGestureEventMask:(unsigned long long)a0;
- (void)setInterfaceStyle:(unsigned long long)a0;
- (void)setNextContentSibling:(id)a0;
- (void)setPreviousContentSibling:(id)a0;
- (BOOL)shouldBeTreatedAsInkEvent:(id)a0;
- (void)showContextHelp:(id)a0;
- (void)smartMagnifyWithEvent:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)tabletPoint:(id)a0;
- (void)tabletProximity:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (id)undoManager;
- (void)updateUserActivityState:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (BOOL)wantsForwardedScrollEvents;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (id)willPresentError:(id)a0;

@end
