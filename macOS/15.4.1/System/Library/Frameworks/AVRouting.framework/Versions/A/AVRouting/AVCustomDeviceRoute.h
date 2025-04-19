@class NSUUID, NSObject;
@protocol OS_nw_endpoint;

@interface AVCustomDeviceRoute : NSObject

@property (nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
