@class JIMSession;

@interface JIMInputController : IMKInputController

@property (retain, nonatomic) id client;
@property (retain, nonatomic) JIMSession *session;
@property BOOL activated;
@property (nonatomic) unsigned long long typingMethod;

- (void)dealloc;
- (void).cxx_destruct;
- (id)menu;
- (BOOL)insertText:(id)a0;
- (void)activateServer:(id)a0;
- (void)commitComposition:(id)a0;
- (void)deactivateServer:(id)a0;
- (BOOL)didCommandBySelector:(SEL)a0 client:(id)a1;
- (void)doCommandBySelector:(SEL)a0 commandDictionary:(id)a1;
- (id)modes:(id)a0;
- (unsigned long long)recognizedEvents:(id)a0;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (id)valueForTag:(long long)a0 client:(id)a1;
- (void)showPreferences:(id)a0;
- (id)candidateControllerForTouchBar;
- (id)functionRowItemTextInputViewController;
- (BOOL)handleEvent:(id)a0 client:(id)a1;
- (void)commandHandler:(id)a0;
- (void)_activateServerIfNeeded:(id)a0;
- (id)_sessionForClient:(id)a0;
- (void)selectSecondaryCandidateAt:(long long)a0;

@end
