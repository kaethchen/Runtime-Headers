@class NSString, NSURLResponse, NSURL, NSObject, NWURLError;
@protocol OS_dispatch_io;

@interface NWURLSessionResponseConsumerDownload : NSObject <NWURLSessionResponseConsumer> {
    BOOL _isResuming;
    id /* block */ _completionHandler;
    NSURLResponse *_currentResponse;
    NSURL *_fileURL;
    NSString *_tempFileName;
    NSObject<OS_dispatch_io> *_io;
    id /* block */ _pendingCompletionBlock;
    NWURLError *_error;
    long long _countOfBytesReceivedInternal;
}

@property (readonly) NSURLResponse *response;
@property (readonly) long long countOfBytesReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
