@class NSString;

@interface _SKUIStoreProductRemoteViewController : NSRemoteViewController <SKUIStoreProductPageHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedObject;

@end
