@class NSArray, NSDictionary, ML3DatabaseConnection;

@interface ML3ContainerItemDiffOperation : NSOperation {
    long long _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    NSDictionary *_updatedItemsProperties;
    ML3DatabaseConnection *_connection;
}

@property (retain, nonatomic) NSArray *containerItemsToUpdate;
@property (retain, nonatomic) NSArray *containerItemsToDelete;

- (void).cxx_destruct;
- (void)main;
- (id)initWithContainerPersistentID:(long long)a0 updatedItemsPersistentIDs:(id)a1 connection:(id)a2;
- (id)initWithContainerPersistentID:(long long)a0 updatedItemsPersistentIDs:(id)a1 updatedItemsProperties:(id)a2 connection:(id)a3;

@end
