@class MTRDeviceController, NSUUID;

@interface MTRDeviceControllerEntity : NSObject

@property (retain) MTRDeviceController *controller;
@property (retain) NSUUID *entityIdentifier;
@property long long runningMode;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0 entityIdentifier:(id)a1 runningMode:(long long)a2;

@end
