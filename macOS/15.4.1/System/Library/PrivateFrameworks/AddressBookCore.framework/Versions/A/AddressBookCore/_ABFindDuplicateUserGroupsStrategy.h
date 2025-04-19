@class NSString, CNFuture;

@interface _ABFindDuplicateUserGroupsStrategy : NSObject <ABFindDuplicateGroupsTaskStrategyImpl> {
    CNFuture *_groupDiscoveryFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroups:(id)a0;
- (id)filterPartitionedGroups:(id)a0;
- (id)groupDiscoveryFuture;
- (id)initWithAddressBook:(id)a0;
- (id)initWithGroupDiscoveryFuture:(id)a0;

@end
