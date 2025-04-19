@class CNContactStore, CNUIEditingPolicy, CNUIMeContactMonitor;
@protocol CNSchedulerProvider, CNUIParentContainerCache;

@interface CNUIMutableEnvironment : CNUIEnvironment

@property (retain, nonatomic) CNContactStore *defaultContactStore;
@property (retain, nonatomic) CNContactStore *contactStoreWithAllContacts;
@property (retain, nonatomic) CNContactStore *contactStoreWithLocalAndDonatedContacts;
@property (retain, nonatomic) CNUIEditingPolicy *editingPolicy;
@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (retain, nonatomic) CNUIMeContactMonitor *meContactMonitor;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setContactStoreWithAllContacts:(id)a0;
- (void)setContactStoreWithLocalAndDonatedContacts:(id)a0;
- (void)setDefaultContactStore:(id)a0;
- (void)setEditingPolicy:(id)a0;
- (void)setMeContactMonitor:(id)a0;
- (void)setParentContainerCache:(id)a0;
- (void)setSchedulerProvier:(id)a0;

@end
