@class NSString, NSObject, NSURLResponse;
@protocol OS_dispatch_data;

@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject <NWURLSessionResponseConsumer> {
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly) NSURLResponse *response;
@property (readonly) long long countOfBytesReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
