@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject

@property (retain) AMSDeviceMessengerFilter *filter;
@property (copy) id /* block */ block;

- (void).cxx_destruct;

@end
