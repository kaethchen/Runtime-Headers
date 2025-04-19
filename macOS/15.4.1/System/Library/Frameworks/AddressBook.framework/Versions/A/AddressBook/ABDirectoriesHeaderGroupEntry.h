@class NSString;
@protocol ABSearchOperationsFactory;

@interface ABDirectoriesHeaderGroupEntry : ABHeaderGroupEntry <ABContactSearching> {
    id<ABSearchOperationsFactory> _operationsFactory;
}

@property (readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)selectHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithName:(id)a0 operationsFactory:(id)a1 children:(id)a2;
- (id)nameWithStyleProvider:(id)a0;
- (id)searchOperationsForString:(id)a0 delegate:(id)a1;

@end
