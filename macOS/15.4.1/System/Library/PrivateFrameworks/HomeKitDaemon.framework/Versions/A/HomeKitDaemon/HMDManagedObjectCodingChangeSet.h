@class HMDManagedObjectCodingChangeSetSummary, NSMutableDictionary;

@interface HMDManagedObjectCodingChangeSet : NSObject {
    NSMutableDictionary *_changedObjects;
    HMDManagedObjectCodingChangeSetSummary *_summary;
}

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) HMDManagedObjectCodingChangeSetSummary *summary;

- (void).cxx_destruct;
- (long long)changeScopeForObjectWithID:(id)a0 attributeKeys:(id *)a1 relationshipKeys:(id *)a2;
- (id)initWithCodingModel:(id)a0 context:(id)a1 changes:(id /* block */)a2;
- (id)initWithCodingModel:(id)a0 context:(id)a1 transactions:(id)a2;

@end
