@class NSString, NSArray, GKUIActivityIndicatorView, GKLoadableContentStateMachine;

@interface GKLoadingViewController : UXViewController <_GKStateMachineDelegate>

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) GKUIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)showLoadingIndicator;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitLoadedState;
- (void)didExitLoadingState;
- (void)didExitRefreshingState;
- (void)setViewsToHideHidden:(BOOL)a0;

@end
