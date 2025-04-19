@protocol HMDFMFHandlerProtocol;

@interface HMDFMFHandlerFactory : NSObject

@property (class, nonatomic, readonly) id<HMDFMFHandlerProtocol> sharedHandler;

- (id)init;

@end
