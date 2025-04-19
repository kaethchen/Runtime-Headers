@class SystemPowerNotifier, AAP, NSString;

@interface AAPManager : NSObject <AAPDelegate>

@property (retain) SystemPowerNotifier *powerNotifier;
@property unsigned char numOfBuddyRetrans;
@property unsigned short offset_global;
@property unsigned short log_type;
@property (retain) AAP *lastConnectedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
