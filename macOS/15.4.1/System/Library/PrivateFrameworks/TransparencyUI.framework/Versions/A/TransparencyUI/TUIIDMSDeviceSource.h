@class NSMutableDictionary;
@protocol TransparencyIDMSDeviceProtocol;

@interface TUIIDMSDeviceSource : NSObject

@property (retain) id<TransparencyIDMSDeviceProtocol> d;
@property (retain) NSMutableDictionary *idmsDevices;

- (void).cxx_destruct;
- (id)mapDeviceWithMissing:(id)a0 aaDevices:(id)a1;
- (id)initWithIdmsDeviceProtocol:(id)a0;

@end
