@class NSString, NSUUID, NSURL, KGDatabase;

@interface KGDegasGraphStore : NSObject <KGGraphStore> {
    BOOL _inTransactionCheckIsEnabled;
}

@property (class, readonly, copy, nonatomic) NSString *persistentStoreFileExtension;

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) long long transactionCounter;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) KGDatabase *database;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)edgeLabels;
- (id)nodeLabels;
- (void)enableInTransactionCheck;
- (BOOL)noFatalError;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (id)_lock_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)a0 intersectingEdgeIdentifiers:(id)a1 edgeDirection:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_lock_enumerateEdgesWithIdentifiers:(id)a0 entityFactory:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (void)_lock_enumerateNodesWithIdentifiers:(id)a0 entityFactory:(id)a1 block:(id /* block */)a2;
- (BOOL)_lock_filterEdgesWithOptionalLabels:(id)a0 includeTombstones:(BOOL)a1 edgeIdentifiers:(inout id *)a2 error:(id *)a3;
- (BOOL)_lock_filterEdgesWithProperties:(id)a0 includeTombstones:(BOOL)a1 edgeIdentifiers:(inout id *)a2 error:(id *)a3;
- (BOOL)_lock_filterEdgesWithRequiredLabels:(id)a0 includeTombstones:(BOOL)a1 edgeIdentifiers:(inout id *)a2 error:(id *)a3;
- (BOOL)_lock_filterNodesWithOptionalLabels:(id)a0 includeTombstones:(BOOL)a1 nodeIdentifiers:(inout id *)a2 error:(id *)a3;
- (BOOL)_lock_filterNodesWithProperties:(id)a0 includeTombstones:(BOOL)a1 nodeIdentifiers:(inout id *)a2 error:(id *)a3;
- (BOOL)_lock_filterNodesWithRequiredLabels:(id)a0 includeTombstones:(BOOL)a1 nodeIdentifiers:(inout id *)a2 error:(id *)a3;
- (id)_lock_graphIdentifier;
- (id)_lock_neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)_lock_nodeForIdentifier:(unsigned long long)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)_lock_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)_lock_nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)_lock_sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)_lock_targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)_resolvedPropertyValue:(id)a0 isScalar:(BOOL *)a1;
- (id)arrayOfEdgesWithIdentifiers:(id)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)arrayOfNodesWithIdentifiers:(id)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)changesAfterToken:(id)a0 transactionLimit:(long long)a1 error:(id *)a2;
- (id)edgeChangesAfterToken:(id)a0 transactionLimit:(long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)edgeForIdentifier:(unsigned long long)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)edgeIdentifiers:(id)a0 sortedByFloatPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)edgeIdentifiers:(id)a0 sortedByIntegerPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)edgeIdentifiers:(id)a0 sortedByStringPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)edgeIdentifiersBetween:(id)a0 endNodeIdentifiers:(id)a1 edgeFilter:(id)a2 edgeDirection:(unsigned long long)a3 error:(id *)a4;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 withLabels:(id)a1 edgeDirection:(unsigned long long)a2 error:(id *)a3;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 intersectingEdgeIdentifiers:(id)a1 edgeDirection:(unsigned long long)a2 error:(id *)a3;
- (id)labelsOfEdgesForIdentifiers:(id)a0;
- (id)labelsOfNodesForIdentifiers:(id)a0;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)nodeChangesAfterToken:(id)a0 transactionLimit:(long long)a1 nodeFilter:(id)a2 error:(id *)a3;
- (id)nodeForIdentifier:(unsigned long long)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)nodeIdentifiers:(id)a0 sortedByFloatPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)nodeIdentifiers:(id)a0 sortedByIntegerPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)nodeIdentifiers:(id)a0 sortedByStringPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)nodeIdentifiers:(id)a0 sortedByUnsignedIntegerPropertyForName:(id)a1 ascending:(BOOL)a2 limit:(long long)a3 error:(id *)a4;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)orderedArrayOfEdgesWithIdentifiers:(id)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)orderedArrayOfNodesWithIdentifiers:(id)a0 entityFactory:(id)a1 error:(id *)a2;
- (id)propertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)propertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)removeEdgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeEdgesForIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)removeNodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeNodesForIdentifiers:(id)a0 error:(id *)a1;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;

@end
