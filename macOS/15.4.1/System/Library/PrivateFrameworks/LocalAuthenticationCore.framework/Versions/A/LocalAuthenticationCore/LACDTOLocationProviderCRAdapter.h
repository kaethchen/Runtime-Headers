@class NSString, LACDTOLocationState, NSObject;
@protocol OS_dispatch_queue;

@interface LACDTOLocationProviderCRAdapter : NSObject <LACDTOLocationProvider> {
    NSObject *_manager;
    LACDTOLocationState *_locationState;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
