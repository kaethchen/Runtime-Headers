@class NSMutableArray, NSString, AXKInputMarkingSessionTracker, AXKElementController, NSObject, AXKApplicationController, AXKTextElementEditListenerElementInfo, AXKKeyboardFocusTracker;
@protocol OS_dispatch_queue;

@interface AXKTextElementEditTracker : NSObject <AXKKeyboardFocusListener, AXKInputMarkingSessionDelegate>

@property (class, readonly) AXKTextElementEditTracker *sharedSingleLineTracker;
@property (class, readonly) AXKTextElementEditTracker *sharedMultipleLinesTracker;

@property (retain) AXKTextElementEditListenerElementInfo *_elementInfo;
@property (retain, nonatomic) AXKKeyboardFocusTracker *_keyFocusTracker;
@property (retain, nonatomic) NSMutableArray *_listeners;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_trackerQueue;
@property (nonatomic) BOOL _isEditable;
@property (retain, nonatomic) AXKApplicationController *_lastApplicationController;
@property (retain, nonatomic) AXKInputMarkingSessionTracker *_inlineSessionTracker;
@property (retain, nonatomic) AXKElementController *_lastTrackedElement;
@property (nonatomic) BOOL _singleLineMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_gatherElementInfoForElement:(id)a0 withRange:(id)a1 withPreviousElementInfo:(id)a2;
+ (id)_addUnderlineAttributeForInlineSession:(id)a0 withElementInfo:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForRange:(id)a0 textElement:(id)a1 withElementInfo:(id)a2;
+ (id)_convertAXFTextRange:(id)a0 toParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rangeLimit:(id)a2;
+ (id)_gatherElementInfoForElement:(id)a0 centeredAroundRange:(id)a1 withNumberOfLines:(unsigned long long)a2 withPreviousElementInfo:(id)a3;
+ (void)_handlePasswordFieldElement:(id)a0 withElementInfo:(id)a1;
+ (BOOL)_isCurrentLineNewLine:(id)a0 textElement:(id)a1;
+ (id)_lineRangeForElement:(id)a0 centeredAroundLine:(long long)a1 numberOfLines:(long long)a2;
+ (id)_rangeForElement:(id)a0 centerAroundRange:(id)a1 withNumberOfLines:(long long)a2 shouldTrimNewline:(BOOL)a3;
+ (id)_selectedLineRangeForElement:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionRange:(id)a0 relativeToLineRange:(id)a1;
+ (id)_textElement:(id)a0 attributedStringForRange:(id)a1 shouldTrimNewline:(BOOL)a2 withElementInfo:(id)a3;
+ (void)_updateLineIndexForElement:(id)a0 withElementInfo:(id)a1;
+ (long long)_wordDelimCountAtEndOfString:(id)a0;
+ (id)_wordTerminationCharSet;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomFocusRectForMultipleIndexRange:(id)a0 textElementController:(id)a1 withPreviousElementInfo:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomFocusRectForRange:(id)a0 textElement:(id)a1 withElementInfo:(id)a2 withPreviousElementInfo:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomFocusRectForZeroLengthIndexBasedRange:(id)a0 textElementController:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomFocusRectForZeroLengthMarkerBasedRange:(id)a0 textElementController:(id)a1 currentFocusedLineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)elementInfoForElement:(id)a0 textRange:(id)a1 lineIndex:(long long)a2;
+ (BOOL)isEditableTextElement:(id)a0;
+ (BOOL)isEditableTextUIElement:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (id)_characterAfterSelectionForElement:(id)a0 elementInfo:(id)a1;
- (id)_completedWordForElement:(id)a0 info:(id)a1 requireWordDelimiter:(BOOL)a2;
- (id)_deletionCandidateTextForElement:(id)a0 elementInfo:(id)a1;
- (void)_echoCharacterAndWord:(id)a0 elementInfo:(id)a1;
- (void)_fetchAndSignalElementInfoChanged:(id)a0;
- (BOOL)_findListener:(id)a0 inListeners:(id)a1;
- (void)_handleInfoChangedContentDecreased:(id)a0 previousElementInfo:(id)a1;
- (void)_handleInfoChangedContentIncreased:(id)a0 previousElementInfo:(id)a1;
- (void)_handleInfoChangedSelectionChanged:(id)a0 previousElementInfo:(id)a1;
- (void)_performAsyncOnTrackerQueue:(id /* block */)a0;
- (void)_registeredListenersDidChange;
- (void)_selectedTextChangedNotification:(id)a0;
- (void)_setFocusedTextElementController:(id)a0;
- (BOOL)_shouldRegisterNotificationsFromApplication:(id)a0;
- (BOOL)_shouldSignalForElement:(id)a0;
- (void)_signalDelegatesInfoChangedForElement:(id)a0 infoBeforeChange:(id)a1 infoAfterChange:(id)a2;
- (void)_signalForElement:(id)a0 cursorTraversedString:(id)a1 selectionRange:(id)a2 editTracker:(id)a3 isEditable:(BOOL)a4;
- (void)_signalForElement:(id)a0 selectionChanged:(id)a1 selectionRange:(id)a2 editTracker:(id)a3 isEditable:(BOOL)a4;
- (void)_signalForElement:(id)a0 stringDeleted:(id)a1 differenceFromPreviousString:(id)a2 wasSelected:(BOOL)a3 editTracker:(id)a4;
- (void)_signalForElement:(id)a0 stringDeleted:(id)a1 wasSelected:(BOOL)a2 editTracker:(id)a3;
- (void)_signalForElement:(id)a0 stringInserted:(id)a1 wordCompleted:(id)a2 editTracker:(id)a3;
- (void)_signalForElement:(id)a0 updateCurrentEditingElementInfo:(id)a1;
- (void)_textSelectionChangedForElement:(id)a0;
- (void)inputMarkingSession:(id)a0 contentChanged:(id)a1;
- (void)inputMarkingSession:(id)a0 contentDeleted:(id)a1;
- (void)inputMarkingSession:(id)a0 contentInserted:(id)a1;
- (void)keyboardFocusTracker:(id)a0 keyboardFocusedApplicationChanged:(id)a1;
- (void)keyboardFocusTracker:(id)a0 keyboardFocusedElementChanged:(id)a1;
- (void)textElementSelectionChanged:(id)a0;
- (void)unregisterListener:(id)a0;

@end
