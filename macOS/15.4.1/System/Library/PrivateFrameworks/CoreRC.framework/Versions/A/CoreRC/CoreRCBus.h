@class NSUUID, NSSet, NSMutableSet, CoreRCManager, NSObject;
@protocol OS_dispatch_queue, CoreRCBusDelegate;

@interface CoreRCBus : NSObject <NSCopying, NSSecureCoding> {
    id<CoreRCBusDelegate> _delegate;
    CoreRCManager *_manager;
    unsigned int _assertionID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableSet *devicesInternal;
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) BOOL allowHibernation;
@property (readonly, nonatomic) NSSet *devices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)manager;
- (id)serialQueue;
- (void)setManager:(id)a0;
- (id)devices;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void)didAddDevice:(id)a0;
- (void)didRemoveDevice:(id)a0;
- (int)_allowSleep;
- (id)mergeProperties;
- (int)_preventSleep;
- (BOOL)allowHibernation;
- (id)deviceOnBusEquivalentTo:(id)a0;
- (void)didAddToManager:(id)a0;
- (void)didRemoveFromManager:(id)a0;
- (void)didUpdateProperties:(id)a0;
- (id)initWithBus:(id)a0;
- (id)mergeDevice:(id)a0;
- (void)mergePropertiesFromBus:(id)a0;
- (void)notifyDelegateAllDevicesRemoved:(id)a0;
- (void)notifyDelegateDeviceAdded:(id)a0;
- (void)notifyDelegateDeviceRemoved:(id)a0;
- (void)notifyDelegateDeviceUpdated:(id)a0;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (void)removeAllExternalDevices;
- (void)replaceDevice:(id)a0 withDevice:(id)a1;
- (BOOL)setAllowHibernation:(BOOL)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)willAddDevice:(id)a0;
- (void)willAddToManager:(id)a0;
- (void)willRemoveDevice:(id)a0;
- (void)willRemoveFromManager:(id)a0;

@end
