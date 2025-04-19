@class NSNumber, NSString;

@interface MGHomePodAccessory : MGSoloDevice <MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol, MGRoutableAudioEntityProtocol>

@property (readonly, copy, nonatomic) NSNumber *HomePodVariant;
@property (readonly, copy, nonatomic) NSNumber *productColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (void)HomePodAccessoryWithConnectionProvider:(id)a0 HomeKitAccessory:(id)a1 completion:(id /* block */)a2;
+ (void)HomePodAccessoryWithHomeKitAccessory:(id)a0 completion:(id /* block */)a1;

@end
