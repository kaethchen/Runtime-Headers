@class NSTextField, GKNicknameTextField, NSView, NSProgressIndicator, NSString, NSButton;

@interface GKNicknameSuggestionViewMac : NSView <GKNicknameSuggestionViewProtocol>

@property (retain, nonatomic) GKNicknameTextField *nicknameTextField;
@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (retain, nonatomic) NSTextField *nicknameMessage;
@property (retain, nonatomic) NSView *suggestionsContainer;
@property (retain, nonatomic) NSButton *firstSuggestion;
@property (retain, nonatomic) NSButton *secondSuggestion;
@property (retain, nonatomic) NSButton *thirdSuggestion;
@property (nonatomic) BOOL shouldAddBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperView;

- (void).cxx_destruct;
- (void)updateLayer;

@end
