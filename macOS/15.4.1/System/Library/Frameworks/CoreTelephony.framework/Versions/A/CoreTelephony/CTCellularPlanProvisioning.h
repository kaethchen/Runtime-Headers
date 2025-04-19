@interface CTCellularPlanProvisioning : NSObject

@property (readonly, nonatomic) BOOL supportsEmbeddedSIM;

- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsCellularPlan;

@end
