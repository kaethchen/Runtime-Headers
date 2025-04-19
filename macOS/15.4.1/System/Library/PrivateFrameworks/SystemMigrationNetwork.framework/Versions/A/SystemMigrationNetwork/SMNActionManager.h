@class SMNPathingAction;

@interface SMNActionManager : NSObject

@property (retain) SMNPathingAction *pathingActionInProgress;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)pathingActionCompleted:(id)a0;
- (void)stopPathingActionsPriorTo:(id)a0;

@end
