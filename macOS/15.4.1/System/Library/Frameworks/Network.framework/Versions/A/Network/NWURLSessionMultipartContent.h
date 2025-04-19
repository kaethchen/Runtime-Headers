@class NWURLError, NSObject;
@protocol OS_dispatch_data;

@interface NWURLSessionMultipartContent : NSObject {
    BOOL _complete;
    NSObject<OS_dispatch_data> *_data;
    NWURLError *_error;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;

@end
