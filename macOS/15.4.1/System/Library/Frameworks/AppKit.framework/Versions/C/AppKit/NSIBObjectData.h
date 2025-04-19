@class NSMapTable, NSString, NSMutableSet, NSIBObjectDataAuxilary, NSMutableArray;

@interface NSIBObjectData : NSObject <NSCoding> {
    id rootObject;
    NSMapTable *objectTable;
    NSMapTable *nameTable;
    NSMutableSet *visibleWindows;
    NSMutableArray *connections;
    id firstResponder;
    id fontManager;
    NSMapTable *oidTable;
    unsigned long long nextOid;
    NSMapTable *classTable;
    NSMapTable *instantiatedObjectTable;
    NSString *targetFramework;
    id _document;
    NSIBObjectDataAuxilary *_objectDataAuxilary;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)rootObject;
- (void)setRootObject:(id)a0;
- (id)targetFramework;
- (void)setConnections:(id)a0;
- (void)_addEarlyDecodingObjectsFromObjectList:(id)a0 toConnections:(id)a1;
- (void)_assignObjectIds;
- (void)_encodeIntValuedMapTable:(id)a0 withCoder:(id)a1;
- (void)_encodeMapTable:(id)a0 forTypes:(const char *)a1 withCoder:(id)a2;
- (void)_encodeObjectValuedMapTable:(id)a0 withCoder:(id)a1;
- (void)_readVersion0:(id)a0;
- (void)_removeEarlyDecodingObjectConnectionsFromConnections:(id)a0;
- (id)classTable;
- (id)connections;
- (id)firstResponder;
- (id)instantiateObject:(id)a0;
- (id)nameTable;
- (long long)nextObjectID;
- (void)nibInstantiateWithOwner:(id)a0;
- (void)nibInstantiateWithOwner:(id)a0 options:(id)a1 topLevelObjects:(id)a2;
- (void)nibInstantiateWithOwner:(id)a0 topLevelObjects:(id)a1;
- (id)objectTable;
- (id)oidTable;
- (void)setFirstResponder:(id)a0;
- (void)setNextObjectID:(unsigned long long)a0;
- (void)setShouldEncodeDesigntimeData:(BOOL)a0;
- (void)setTargetFramework:(id)a0;
- (void)setVisibleWindows:(id)a0;
- (BOOL)shouldEncodeDesigntimeData;
- (id)visibleWindows;

@end
