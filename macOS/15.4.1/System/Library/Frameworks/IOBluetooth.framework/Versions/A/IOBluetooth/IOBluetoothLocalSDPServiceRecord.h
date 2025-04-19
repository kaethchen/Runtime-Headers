@class NSDictionary, NSMutableSet, IOBluetoothUserNotification;

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord <NSCoding, NSSecureCoding> {
    NSDictionary *mServerAttributeDictionary;
    NSDictionary *mLocalAttributeDictionary;
    NSMutableSet *mAllowedDevices;
    NSMutableSet *mRestrictedDevices;
    IOBluetoothUserNotification *mIncomingChannelNotification;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)withServerAttributeDictionary:(id)a0 localAttributeDictionary:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isPersistent;
- (id)getLocalAttribute:(id)a0;
- (id)getLocalAttributeDictionary;
- (id)getNameOfService;
- (id)getServerAttributeDictionary;
- (void)incomingL2CAPChannel:(id)a0 channel:(id)a1;
- (void)incomingRFCOMMChannel:(id)a0 channel:(id)a1;
- (id)initWithServerAttributeDictionary:(id)a0 localAttributeDictionary:(id)a1;
- (void)launchApp:(id)a0 objectID:(unsigned long long)a1;
- (BOOL)registerForIncomingChannelNotifications;
- (BOOL)shouldVendServiceForUser:(int)a0;
- (BOOL)uniqueClientPerDevice;
- (BOOL)uniqueClientPerService;
- (BOOL)unregisterForIncomingChannelNotifications;

@end
