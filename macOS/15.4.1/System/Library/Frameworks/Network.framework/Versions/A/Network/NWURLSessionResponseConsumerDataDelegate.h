@class NSString, NSURLResponse;

@interface NWURLSessionResponseConsumerDataDelegate : NSObject <NWURLSessionResponseConsumer> {
    NSURLResponse *_currentResponse;
    long long _countOfBytesReceivedInternal;
}

@property (readonly) NSURLResponse *response;
@property (readonly) long long countOfBytesReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
