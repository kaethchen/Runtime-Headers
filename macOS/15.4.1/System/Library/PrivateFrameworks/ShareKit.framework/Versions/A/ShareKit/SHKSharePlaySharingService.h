@class NSViewController;
@protocol GPGroupActivitySharingControllerHelpers;

@interface SHKSharePlaySharingService : SHKSharingService

@property (retain, nonatomic) NSViewController<GPGroupActivitySharingControllerHelpers> *groupActivitySharingController;

+ (BOOL)sharePlayIsAvailable;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (BOOL)needsCustomPresentingWindow;
- (void)startSharePlay:(id)a0 completion:(id /* block */)a1;

@end
