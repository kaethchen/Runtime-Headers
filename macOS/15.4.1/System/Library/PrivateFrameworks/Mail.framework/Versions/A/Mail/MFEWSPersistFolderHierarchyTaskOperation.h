@class MFEWSSyncFolderHierarchyBatch;
@protocol MFEWSPersistFolderHierarchyTaskOperationDelegate;

@interface MFEWSPersistFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (weak) id<MFEWSPersistFolderHierarchyTaskOperationDelegate> delegate;
@property (readonly, nonatomic) MFEWSSyncFolderHierarchyBatch *batch;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBatch:(id)a0;

@end
