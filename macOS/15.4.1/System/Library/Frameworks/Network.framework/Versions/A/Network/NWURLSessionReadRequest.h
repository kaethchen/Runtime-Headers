@class NWURLError, NSObject;
@protocol OS_dispatch_data;

@interface NWURLSessionReadRequest : NSObject {
    BOOL _complete;
    unsigned long long _minimumLength;
    unsigned long long _maximumLength;
    id /* block */ _awaitingData;
    NSObject<OS_dispatch_data> *_data;
    NWURLError *_error;
}

- (void).cxx_destruct;

@end
