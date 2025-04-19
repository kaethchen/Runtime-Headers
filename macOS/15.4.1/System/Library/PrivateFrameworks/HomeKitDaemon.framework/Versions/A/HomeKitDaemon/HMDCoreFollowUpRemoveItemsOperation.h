@class NSArray;
@protocol HMDFollowUpController;

@interface HMDCoreFollowUpRemoveItemsOperation : HMFOperation

@property (copy, nonatomic) NSArray *identifiersToRemove;
@property (retain, nonatomic) id<HMDFollowUpController> followUpController;

- (void).cxx_destruct;
- (void)main;
- (id)initWithIdentifiersToRemove:(id)a0 followUpController:(id)a1;

@end
