@class NSArray, PLBackgroundJobCriteria;

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing;
@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria;

- (void).cxx_destruct;
- (id)initWithCriteria:(id)a0 workItemsNeedingProcessing:(id)a1;
- (id)initWithZeroWorkItems;

@end
