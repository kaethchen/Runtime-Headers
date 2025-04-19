@protocol GKChallengesViewControllerDelegate;

@interface GKChallengesViewController : NSViewController <GKViewController> {
    id _internal3;
    id _internal4;
}

@property (retain, nonatomic) id navigationController;
@property (retain, nonatomic) id challengesViewController;
@property (weak) id<GKChallengesViewControllerDelegate> challengeDelegate;

- (void).cxx_destruct;

@end
