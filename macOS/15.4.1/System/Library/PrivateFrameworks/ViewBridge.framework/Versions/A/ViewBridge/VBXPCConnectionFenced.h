@class NSXPCConnection, NSXPCInterface, CAFenceHandle, CAContext, NSString;
@protocol NSVBXPCConnectionClient;

@interface VBXPCConnectionFenced : VBXPCConnection <HasAuxiliaryConnection> {
    unsigned char _invalid : 1;
    unsigned char _memberOfFenceGroup;
    unsigned int _fenceGroupAcquisition;
    unsigned int _durableFenceGroupAcquisition;
    unsigned int _fenceGroupAcquisitionDurability;
}

@property (class, readonly) VBXPCConnectionFenced *fencedConnection;

@property BOOL activeFencingEnabled;
@property (weak) id<NSVBXPCConnectionClient> client;
@property (retain) CAFenceHandle *mostRecentIncomingFenceHandle;
@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceOutgoing;
@property (readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceIncoming;
@property (weak) NSXPCConnection *auxiliaryServiceConnection;
@property (readonly) CAContext *fenceContext;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)addIncomingFence:(id)a0;
- (BOOL)decrementActiveRoleDurability;
- (BOOL)incrementActiveRoleDurability;
- (id)mutateIncomingMessage:(id)a0;
- (id)mutateOutgoingMessage:(id)a0 withReplyIdentifier:(unsigned int)a1;

@end
