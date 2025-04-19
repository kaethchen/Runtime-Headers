@class CKContainer;

@interface PFStaticCloudKitContainerProvider : PFCloudKitContainerProvider

@property (readonly, nonatomic) CKContainer *container;

- (void)dealloc;
- (id)initWithContainer:(id)a0;
- (id)containerWithIdentifier:(id)a0;
- (id)containerWithIdentifier:(id)a0 options:(id)a1;

@end
