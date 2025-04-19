@class XCTAnimationsIdleNotifier, NSString, DTXProxyChannel, XCTElementQueryProcessor, XCTCapabilities, XCTMainRunLoopIdleNotifier, DTXConnection, NSObject, NSMutableArray;
@protocol XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource, XCTInternalEntitlementChecking, OS_dispatch_queue, XCTAccessibilityFramework;

@interface XCTAutomationSession : NSObject <XCTMessagingChannel_RunnerToUIProcess, XCTRemoteApplicationAutomationTarget, XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource, XCTMacCatalystStatusProviding, XCTConnectionAccepting>

@property (readonly) NSMutableArray *connections;
@property (readonly) XCTElementQueryProcessor *queryProcessor;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) XCTMainRunLoopIdleNotifier *runLoopIdleMonitor;
@property (readonly) XCTAnimationsIdleNotifier *animationIdleNotifier;
@property (readonly) DTXConnection *dtxConnection;
@property (readonly) DTXProxyChannel *proxyChannel;
@property (retain) XCTCapabilities *remoteInterfaceCapabilities;
@property (readonly) id<XCTAccessibilityFramework> accessibilityFramework;
@property (readonly, weak) id<XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource> dataSource;
@property (weak) id<XCTInternalEntitlementChecking> internalEntitlementChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL allowsRemoteAccess;
@property (readonly) BOOL supportsHostedViewCoordinateTransformations;
@property (readonly) BOOL usePointTransformationsForFrameConversions;
@property (readonly) BOOL hasBannerNotificationIsStickyAttribute;
@property (readonly) BOOL providesValuesForPrivilegedAttributes;

+ (id)capabilitiesBuilder;

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptNewConnection:(id)a0;
- (id)initWithAccessibilityFramework:(id)a0;
- (id)snapshotForElement:(id)a0 attributes:(id)a1 parameters:(id)a2 timeoutControls:(id)a3 error:(id *)a4;
- (id)_XCT_attributesForElement:(id)a0 attributes:(id)a1;
- (id)_XCT_exchangeCapabilities:(id)a0;
- (id)_XCT_fetchMatchesForQuery:(id)a0;
- (id)_XCT_notifyWhenAnimationsAreIdle;
- (id)_XCT_notifyWhenMainRunLoopIsIdle;
- (id)_XCT_setMallocStackLoggingWithMode:(id)a0;
- (id)attributesForElement:(id)a0 attributes:(id)a1 error:(id *)a2;
- (void)attributesForElement:(id)a0 attributes:(id)a1 reply:(id /* block */)a2;
- (void)detectRuntimeIssues;
- (void)exchangeCapabilities:(id)a0 reply:(id /* block */)a1;
- (void)fetchMatchesForQuery:(id)a0 reply:(id /* block */)a1;
- (id)initWithAccessibilityFramework:(id)a0 dataSource:(id)a1;
- (BOOL)isMacCatalystForPID:(int)a0;
- (void)listenForRemoteConnectionViaSerializedTransportWrapper:(id)a0 completion:(id /* block */)a1;
- (void)notifyWhenAnimationsAreIdle:(id /* block */)a0;
- (void)notifyWhenMainRunLoopIsIdle:(id /* block */)a0;
- (id)parameterizedAttribute:(id)a0 forElement:(id)a1 parameter:(id)a2 error:(id *)a3;
- (void)requestHostAppExecutableNameWithReply:(id /* block */)a0;
- (void)setMallocStackLoggingWithMode:(int)a0 reply:(id /* block */)a1;
- (id)valuesForPrivilegedAttributes:(id)a0 forElement:(id)a1 error:(id *)a2;

@end
