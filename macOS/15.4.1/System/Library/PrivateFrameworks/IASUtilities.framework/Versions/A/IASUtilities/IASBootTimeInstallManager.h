@class NSArray, NSXPCConnection, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IASBootTimeInstallManager : NSObject <IASBootTimeInstallClientProtocol>

@property (retain) NSURL *volumeURL;
@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *progressObserversQueue;
@property (retain) NSMutableArray *progressHandlers;
@property (readonly, copy) NSArray *queuedPackages;

+ (void)initialize;
+ (id)managerForVolume:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)bootTimeInstallProgress:(float)a0 estimatedTimeRemaining:(float)a1 status:(id)a2;
- (BOOL)clearQueuedPackagesReturningError:(id *)a0;
- (double)estimatedInstallationTimeForPackages:(id)a0 error:(id *)a1;
- (id)initWithVolume:(id)a0 error:(id *)a1;
- (void)installQueuedPackages:(id)a0 withProgress:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (BOOL)isRestartRequiredByPackages:(id)a0 error:(id *)a1;
- (BOOL)performRestartReturningError:(id *)a0;
- (BOOL)queuePackageForInstallation:(id)a0 error:(id *)a1;
- (id)queuedPackagesReturningError:(id *)a0;

@end
