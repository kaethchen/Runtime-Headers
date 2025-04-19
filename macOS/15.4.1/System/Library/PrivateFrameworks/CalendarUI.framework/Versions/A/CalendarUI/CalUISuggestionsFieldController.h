@class NSString, CalUISuggestionsField;

@interface CalUISuggestionsFieldController : NSObject <CalUIResizingTextFieldDelegate>

@property (weak) CalUISuggestionsField *suggestionsField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
