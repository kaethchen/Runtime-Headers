@class NSArray;

@interface _WKWebContentProcessInfo : _WKProcessInfo {
    struct RetainPtr<NSMutableArray<WKWebView *>> { void *m_ptr; } _webViews;
}

@property (readonly, nonatomic) long long webContentState;
@property (readonly, nonatomic) NSArray *webViews;
@property (readonly, nonatomic) BOOL runningServiceWorkers;
@property (readonly, nonatomic) BOOL runningSharedWorkers;
@property (readonly, nonatomic) double totalForegroundTime;
@property (readonly, nonatomic) double totalBackgroundTime;
@property (readonly, nonatomic) double totalSuspendedTime;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTaskInfo:(const struct TaskInfo { int x0; unsigned char x1; struct Seconds { double x0; } x2; struct Seconds { double x0; } x3; unsigned long long x4; } *)a0 process:(const void *)a1;

@end
