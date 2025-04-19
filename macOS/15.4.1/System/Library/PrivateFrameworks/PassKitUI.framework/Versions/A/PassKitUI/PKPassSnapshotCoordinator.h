@class NSString;

@interface PKPassSnapshotCoordinator : NSObject <PKPassSnapshotCoordinatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardSnapshotForSource:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
