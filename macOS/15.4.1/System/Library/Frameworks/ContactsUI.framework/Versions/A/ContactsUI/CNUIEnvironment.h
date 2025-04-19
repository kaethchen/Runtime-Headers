@class CNContactStore, CNAvatarPickerExtensionDiscoveryManager, CNUIEditingPolicy, CNUIMeContactMonitor;
@protocol CNSchedulerProvider, CNUIParentContainerCache;

@interface CNUIEnvironment : NSObject <NSMutableCopying>

@property (class, readonly, nonatomic) CNUIEnvironment *defaultEnvironment;

@property (readonly, nonatomic) CNContactStore *defaultContactStore;
@property (readonly, nonatomic) CNContactStore *contactStoreWithAllContacts;
@property (readonly, nonatomic) CNContactStore *contactStoreWithLocalAndDonatedContacts;
@property (readonly, nonatomic) CNUIEditingPolicy *editingPolicy;
@property (readonly, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (readonly, nonatomic) CNUIMeContactMonitor *meContactMonitor;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) CNAvatarPickerExtensionDiscoveryManager *avatarPickerExtensionManager;

+ (id)environmentWithEnvironment:(id)a0;
+ (void)prewarmDefaultEnvionment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDefaultValues;
- (id)copyWithContactStore:(id)a0;
- (id)copyWithEditingPolicy:(id)a0;
- (id)initWithDefaultContactStore:(id)a0 contactStoreWithAllContacts:(id)a1 contactStoreWithLocalAndDonatedContacts:(id)a2 editingPolicy:(id)a3 parentContainerCache:(id)a4 meContactMonitor:(id)a5 schedulerProvider:(id)a6 avatarPickerExtensionManager:(id)a7;

@end
