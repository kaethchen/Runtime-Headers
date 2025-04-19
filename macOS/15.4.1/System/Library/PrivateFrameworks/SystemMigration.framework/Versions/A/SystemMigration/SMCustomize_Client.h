@class SMSystem_Client, NSString, NSXPCConnection, NSXPCInterface;
@protocol SMCustomize_Client_Delegate, SMDPCustomizeProtocol;

@interface SMCustomize_Client : NSObject <MigrationCustomizeEventsListener, SMSizingDelegate>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) SMSystem_Client *customizeSystem;
@property (retain) id<SMDPCustomizeProtocol> daemonProxy;
@property (retain) NSString *pathingProgressMessage;
@property (weak) id<SMCustomize_Client_Delegate> delegate;
@property unsigned long long deferredMandatoryUpdateProductSizeInBytes;

+ (id)customizeEventsListenerInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)submitRequest:(id)a0;
- (id)initWithSystem:(id)a0;
- (void)startCustomizer;
- (void)beginSizeCalculationForComponent:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2;
- (void)beginSizeCalculationForForCustomPathType:(unsigned long long)a0 user:(id)a1 onSourceSystem:(id)a2 andDestinationSystem:(id)a3;
- (void)cancelSizingForSystem:(id)a0;
- (void)connectionErrorOccurred:(id)a0;
- (BOOL)hasCustomPathsForSystem:(id)a0 destinationSystem:(id)a1;
- (void)informationForBundlesAtPaths:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2 reply:(id /* block */)a3;
- (void)pathingProgressFormatKey:(id)a0 arguments:(id)a1;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2 onSystem:(id)a3;
- (void)preliminarySize:(unsigned long long)a0 forComponent:(id)a1 onSystem:(id)a2;
- (void)preliminarySize:(unsigned long long)a0 forUserWithUUID:(id)a1 onSystem:(id)a2;
- (void)preliminarySizeForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2 onSystem:(id)a3;
- (void)sizeAllUsersForSystem:(id)a0 includingVaultUsers:(BOOL)a1;
- (id)sizeForComponent:(id)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2;
- (id)sizeForPathGroup:(unsigned long long)a0 onSourceSystem:(id)a1 andDestinationSystem:(id)a2;
- (void)sizingCompletedForComponent:(id)a0 onSystem:(id)a1 withSize:(unsigned long long)a2;
- (void)sizingCompletedForCustomPathType:(unsigned long long)a0 user:(id)a1 onSystem:(id)a2 withSize:(unsigned long long)a3;
- (void)sizingCompletedForPathGroup:(unsigned long long)a0 onSystem:(id)a1 withSize:(unsigned long long)a2;
- (void)sizingCompletedForUserWithUUID:(id)a0 excludablePaths:(id)a1 onSystem:(id)a2;

@end
