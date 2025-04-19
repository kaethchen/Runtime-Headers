@class NSString, GKPlayerPickerContext, GKMatchmakerViewController;
@protocol GKPlayerPickerDelegate;

@interface GKPlayerPickerViewController : NSViewController <GKInternalPlayerPickerDelegate, GKMatchmakerViewControllerDelegate, GKViewController>

@property (retain, nonatomic) GKPlayerPickerContext *context;
@property (retain, nonatomic) GKMatchmakerViewController *matchmakerVC;
@property (weak, nonatomic) id<GKPlayerPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)matchmaker;
- (id)_initWithMaxPlayers:(long long)a0 excludedPlayers:(id)a1;
- (id)initWithMatch:(id)a0 maxPlayers:(long long)a1;
- (id)initWithMaxPlayers:(long long)a0;
- (id)initWithMaxPlayers:(long long)a0 excludedPlayers:(id)a1;
- (void)internalPlayerPickerDidCancel;
- (void)internalPlayerPickerDidPickPlayers:(id)a0;
- (void)matchmakerViewController:(id)a0 didFailWithError:(id)a1;
- (void)matchmakerViewControllerWasCancelled:(id)a0;

@end
