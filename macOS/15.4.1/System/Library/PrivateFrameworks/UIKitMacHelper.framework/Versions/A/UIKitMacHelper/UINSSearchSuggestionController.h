@class UINSInputView, NSString, UINSSearchSuggestionsShadowTextField;
@protocol UINSSearchSuggestionControllerDelegate;

@interface UINSSearchSuggestionController : NSObject <NSTextSuggestionsDelegate>

@property (retain, nonatomic) UINSSearchSuggestionsShadowTextField *shadowTextField;
@property (retain, nonatomic) id keyPressEventMonitor;
@property (retain, nonatomic) id mouseUpEventMonitor;
@property (nonatomic) unsigned short currentlyHandledKeyPress;
@property (weak, nonatomic) UINSInputView *inputView;
@property (readonly, nonatomic) id<UINSSearchSuggestionControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasVisibleMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)areAppKitSearchSuggestionsAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)_handleKeyEvent:(id)a0;
- (void)textField:(id)a0 didSelectSuggestionItem:(id)a1;
- (void)textField:(id)a0 provideUpdatedSuggestions:(id /* block */)a1;
- (void)_removeEventMonitorsIfNecessary;
- (void)_updatePosition;
- (void)_addEventMonitorsIfNecessary;
- (BOOL)_handleKeyDownWithKeyCode:(unsigned short)a0 modifierFlags:(unsigned long long)a1;
- (void)_hideSuggestionsMenu;
- (void)_leftMouseUpWithoutConsumingEvent:(id)a0;
- (void)_reloadSuggestionsMenu;
- (void)_showSuggestionsMenu;
- (void)dismissMenu;
- (void)searchViewGainedFirstResponder;
- (void)searchViewLostFirstResponder;
- (void)updateForGeometryChange;
- (void)updateForSuggestionsChange;

@end
