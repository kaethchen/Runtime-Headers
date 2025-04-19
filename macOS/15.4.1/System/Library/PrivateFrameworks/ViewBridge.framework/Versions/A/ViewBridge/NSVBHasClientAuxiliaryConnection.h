@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSXPCInterface, CAContext;

@interface NSVBHasClientAuxiliaryConnection : NSObject <HasAuxiliaryConnection> {
    NSXPCListenerEndpoint *_auxiliaryListenerEndpoint;
}

@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceOutgoing;
@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceIncoming;
@property (weak) NSXPCConnection *auxiliaryServiceConnection;
@property (readonly) CAContext *fenceContext;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;

@end
