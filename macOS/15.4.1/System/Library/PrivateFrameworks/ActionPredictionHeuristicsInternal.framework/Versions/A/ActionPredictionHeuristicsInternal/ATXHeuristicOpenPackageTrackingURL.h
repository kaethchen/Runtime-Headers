@class NSString;

@interface ATXHeuristicOpenPackageTrackingURL : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)heuristicResultWithEnvironment:(id)a0;
- (id)permanentRefreshTriggers;
- (id)packageTrackingNumbersFromDataDetectorResults:(id)a0;

@end
