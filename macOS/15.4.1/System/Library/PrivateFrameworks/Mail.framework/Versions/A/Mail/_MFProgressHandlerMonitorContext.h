@class NSString, MCActivityMonitor;
@protocol MFQueryProgressMonitor;

@interface _MFProgressHandlerMonitorContext : NSObject <MFQueryProgressMonitor>

@property (weak, nonatomic) id<MFQueryProgressMonitor> progressMonitor;
@property (weak, nonatomic) MCActivityMonitor *activityMonitor;
@property (readonly, nonatomic) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
