@class NSURL, SMSystem_Daemon, NSObject;
@protocol OS_dispatch_queue;

@interface SMPathsUserHomeSizer : NSObject

@property (weak) SMSystem_Daemon *system;
@property (retain) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain) NSURL *cacheLocation;

- (void).cxx_destruct;
- (id)initWithSystem:(id)a0;
- (void)sizeUsers:(id)a0 recalculationPermitted:(BOOL)a1 progressBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (unsigned long long)calculateSizeAndCount:(unsigned long long *)a0 forUser:(id)a1;
- (unsigned long long)latestFSEventForHome:(id)a0 since:(unsigned long long)a1;
- (unsigned long long)sizeAndCount:(unsigned long long *)a0 forUser:(id)a1;
- (BOOL)user:(id)a0 needsSizeUpdated:(id)a1 latestEvent:(unsigned long long *)a2;

@end
