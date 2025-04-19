@class NSString, NSArray;

@interface ABAggregateSearchOperationsFactory : NSObject <ABSearchOperationsFactory> {
    NSArray *_searchOperationsFactories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)searchOperationsForString:(id)a0 addressBook:(id)a1 delegate:(id)a2;
- (id)initWithSearchOperationsFactories:(id)a0;

@end
