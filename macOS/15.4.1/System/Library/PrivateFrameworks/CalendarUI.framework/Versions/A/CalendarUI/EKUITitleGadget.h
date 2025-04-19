@class CalUISuggestionsField, NSString, NSDictionary, EKEventSuggestionGenerator;

@interface EKUITitleGadget : EKUISingleViewGadget <CalUISuggestionsFieldDelegate>

@property (retain) CalUISuggestionsField *titleField;
@property BOOL shouldConvertNewEventTitleToPlaceholder;
@property double cachedMaxHeight;
@property (retain) NSDictionary *placeholderAttributes;
@property (retain) EKEventSuggestionGenerator *eventSuggestionGenerator;
@property (readonly) CalUISuggestionsField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)needsExpansion;
- (BOOL)performDragOperation:(id)a0;
- (double)preferredWidth;
- (double)maxHeight;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)_showEmptyTitle;
- (id)recurrenceDifferenceDescription;
- (BOOL)allowConversionToReminder;
- (id)claimedPboardTypes;
- (void)editingDidEnd;
- (void)insertNewline;
- (BOOL)isObjectEditable;
- (id)objectTitle;
- (void)queryForString:(id)a0 suggestionsFoundHandler:(id /* block */)a1;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (BOOL)shouldDisplay;
- (BOOL)shouldKeepSuggestedEventsOnTheirOriginalCalendar;
- (void)suggestionSelected:(id)a0;
- (BOOL)timeDetectionForSuggestionsAvoidsChangingDays;
- (id)titleForSuggestion:(id)a0;
- (void)updateObject;
- (void)updateTitle:(id)a0;
- (void)updateWithChanges:(id)a0;
- (id)viewForSuggestion:(id)a0 width:(double)a1;
- (BOOL)wantsTimeDetection;

@end
