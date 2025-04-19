@class NSUUID, NSString, HMDDeviceCapabilities;

@interface HMDAppleMediaDeviceInfo : HMFObject

@property (retain, nonatomic) NSUUID *modelID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSUUID *mediaRouteUUID;
@property (readonly, nonatomic) HMDDeviceCapabilities *capabilities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)asPayload;
- (id)initWithDeviceID:(id)a0 mediaRouteID:(id)a1 deviceCapabilities:(id)a2;

@end
