@class NSArray, NSString, MCMError, NSMutableSet, NSMutableArray;

@interface MCMResultWithOwnersAndGroupsBase : MCMResultBase <MCMResultWithOwnersAndGroups> {
    NSMutableArray *_mutableOwnerIdentifiers;
    NSMutableArray *_mutableGroupIdentifiers;
    NSMutableSet *_facts;
}

@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (readonly, nonatomic) NSArray *groupIdentifiers;
@property (readonly, nonatomic) MCMError *error;
@property (nonatomic, getter=isCacheable) BOOL cacheable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addOwner:(id)a0 group:(id)a1;
- (BOOL)encodeResultOntoReply:(id)a0;

@end
