@class NSObject;

@interface CPKGenerationRemoteViewController : NSRemoteViewController

@property (nonatomic) NSObject *exportedObjectInternal;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedObject;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
