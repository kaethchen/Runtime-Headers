@class MFEWSMailboxItemsBatch;
@protocol MFEWSFetchMessageMetadataOperationDelegate;

@interface MFEWSFetchMessageMetadataOperation : MFEWSNetworkTaskOperation

@property (weak, nonatomic) id<MFEWSFetchMessageMetadataOperationDelegate> delegate;
@property (readonly, nonatomic) MFEWSMailboxItemsBatch *batch;

+ (id)_propertiesForItemClass:(Class)a0;
+ (id)_shapeForType:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBatch:(id)a0;

@end
