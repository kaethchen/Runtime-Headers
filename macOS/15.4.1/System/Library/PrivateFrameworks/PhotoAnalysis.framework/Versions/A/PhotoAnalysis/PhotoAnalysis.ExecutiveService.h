@class NSDictionary, NSError, NSString;

@interface PhotoAnalysis.ExecutiveService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisExecutiveServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ executive;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
    void /* unknown type, empty encoding */ associatedWorkers;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)requestAnalysisStatusWithReply:(void (^)(NSDictionary *, NSError *))a0;
- (void)requestActivityStatusWithReply:(void (^)(NSDictionary *, NSError *))a0;
- (void)performOnDemandTaskWithName:(NSString *)a0 reply:(void (^)(NSError *))a1;
- (void)performOnDemandTasksForScenario:(NSString *)a0 reply:(void (^)(NSError *))a1;

@end
