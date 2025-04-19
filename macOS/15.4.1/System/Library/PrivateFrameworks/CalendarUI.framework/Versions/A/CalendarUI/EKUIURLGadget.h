@class NSString, SGSuggestedEventLaunchInfo;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>

@property BOOL mouseEntered;
@property (retain) SGSuggestedEventLaunchInfo *launchInfo;
@property BOOL shouldScrollTextFieldToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_suggestionsServiceForEvents;
+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)hasData;
- (void)setObject:(id)a0;
- (id)url;
- (id)accessibilityIdentifier;
- (BOOL)clickedOnLink:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)performDragOperation:(id)a0;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)recurrenceDifferenceDescription;
- (id)claimedPboardTypes;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (BOOL)shouldDisplay;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;
- (BOOL)wantsToDisplay;

@end
