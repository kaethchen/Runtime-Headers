@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, MRAVDistantExternalDeviceFactory, MRDistantExternalDevice, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly, nonatomic) MRAVDistantExternalDeviceFactory *externalDeviceFactory;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)connectionType;
- (id)localizedName;
- (id)uniqueIdentifier;
- (BOOL)isConnected;
- (void)setUniqueIdentifier:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (void)setLocalizedName:(id)a0;
- (id)outputDevices;
- (id)_externalOutputContext;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (BOOL)canModifyGroupMembership;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (id)groupSessionInfo;
- (id)initWithDescriptor:(id)a0 xpcEndpointListener:(id)a1;
- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (BOOL)isProxyGroupPlayer;
- (id)personalOutputDevices;

@end
