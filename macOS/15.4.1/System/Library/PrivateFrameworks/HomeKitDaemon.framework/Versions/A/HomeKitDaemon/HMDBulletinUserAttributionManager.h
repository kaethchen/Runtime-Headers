@class NSMutableArray, HMDAccountRegistry;

@interface HMDBulletinUserAttributionManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *userAttributions;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;

+ (id)logCategory;
+ (BOOL)currentStateCharacteristicSupportsUserAttribution:(id)a0;
+ (BOOL)targetStateCharacteristicSupportsUserAttribution:(id)a0;

- (void).cxx_destruct;
- (id)attributedUserUUIDForCurrentStateCharacteristic:(id)a0 destination:(id)a1;
- (id)initWithAccountRegistry:(id)a0;
- (void)removeAttributedUserUUIDForTargetStateCharacteristic:(id)a0;
- (void)saveAttributedUserUUID:(id)a0 forTargetStateCharacteristic:(id)a1;

@end
