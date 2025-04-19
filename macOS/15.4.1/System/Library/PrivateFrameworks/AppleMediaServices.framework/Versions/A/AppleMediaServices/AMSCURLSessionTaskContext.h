@class NSURLSessionTaskMetrics, NSString;

@interface AMSCURLSessionTaskContext : NSObject <NSURLSessionTaskDelegate> {
    struct unique_ptr<std::stop_callback<std::function<void ()>>, std::default_delete<std::stop_callback<std::function<void ()>>>> { struct __compressed_pair<std::stop_callback<std::function<void ()>> *, std::default_delete<std::stop_callback<std::function<void ()>>>> { void *__value_; } __ptr_; } _stopCallback;
}

@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
