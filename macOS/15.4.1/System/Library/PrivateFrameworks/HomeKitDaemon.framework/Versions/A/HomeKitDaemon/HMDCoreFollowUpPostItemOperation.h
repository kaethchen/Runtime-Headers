@protocol HMDFollowUpItem, HMDFollowUpController;

@interface HMDCoreFollowUpPostItemOperation : HMFOperation

@property (copy, nonatomic) id<HMDFollowUpItem> itemToPost;
@property (retain, nonatomic) id<HMDFollowUpController> followUpController;

- (void).cxx_destruct;
- (void)main;
- (id)initWithItemToPost:(id)a0 followUpController:(id)a1;

@end
