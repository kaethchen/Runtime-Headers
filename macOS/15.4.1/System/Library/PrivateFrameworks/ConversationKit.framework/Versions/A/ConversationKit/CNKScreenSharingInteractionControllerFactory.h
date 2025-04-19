@protocol CNKScreenSharingInteractionControllerProtocol;

@interface CNKScreenSharingInteractionControllerFactory : NSObject

@property (nonatomic, readonly) id<CNKScreenSharingInteractionControllerProtocol> sharedController;

- (id)init;

@end
