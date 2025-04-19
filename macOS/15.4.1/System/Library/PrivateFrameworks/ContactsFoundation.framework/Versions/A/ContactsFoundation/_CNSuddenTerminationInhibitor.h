@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithProcessInfo:(id)a0;

@end
