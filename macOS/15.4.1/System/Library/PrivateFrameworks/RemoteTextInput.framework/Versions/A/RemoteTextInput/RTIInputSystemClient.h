@class NSObject, NSMutableDictionary, RTIServiceOptions, NSMutableSet, NSString, NSMutableArray, RTIDocumentRequest;
@protocol OS_dispatch_queue, RTIInputSystemClientDelegate;

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol> {
    unsigned long long _environmentOptions;
    BOOL _isInvalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _endpointsLock;
}

@property (retain, nonatomic) NSMutableDictionary *activeSessions;
@property (retain, nonatomic) NSMutableSet *begunSessionIDs;
@property (retain, nonatomic) NSMutableSet *allowanceRequestors;
@property (retain, nonatomic) NSMutableArray *machNames;
@property (readonly, nonatomic) NSMutableSet *invalidatedServices;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSMutableArray *endpointConnections;
@property (retain, nonatomic) NSMutableDictionary *connectionServiceOptions;
@property (retain, nonatomic) NSMutableArray *endpointServiceOptions;
@property (retain, nonatomic) RTIDocumentRequest *defaultDocumentRequest;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic, getter=isEnvironmentEnabled) BOOL environmentEnabled;
@property (readonly, nonatomic) unsigned long long currentEnvironmentOptions;
@property (weak, nonatomic) id<RTIInputSystemClientDelegate> delegate;
@property (readonly, nonatomic) RTIServiceOptions *serviceOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginAllowingRemoteTextInput:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 options:(id)a1 documentTraits:(id)a2 initialDocumentState:(id)a3;
- (void)endAllowingRemoteTextInput:(id)a0;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0 options:(id)a1;
- (id)initWithMachNames:(id)a0;
- (oneway void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)performTextOperations:(id)a0;
- (oneway void)performTextOperations:(id)a0 resultHandler:(id /* block */)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (void)setEnvironmentOptions:(unsigned long long)a0 withReason:(id)a1;
- (void)removeEndpoint:(id)a0;
- (void)addEndpoint:(id)a0;
- (void)_beginAllActiveSessions;
- (void)_beginAllActiveSessionsForServices:(id)a0;
- (void)_beginAllActiveSessionsForServices:(id)a0 force:(BOOL)a1;
- (void)_beginSessionWithID:(id)a0 forServices:(id)a1 force:(BOOL)a2;
- (void)_configureConnection:(id)a0 withMachName:(id)a1;
- (void)_didIntializeConnection:(id)a0 withMachName:(id)a1;
- (void)_endAllActiveSessionsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_endAllActiveSessionsForServices:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_endSessionWithID:(id)a0 forServices:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_initializeConnectionWithMachName:(id)a0;
- (void)_modifyTextEditingAllowedForReason:(id)a0 notify:(BOOL)a1 animated:(BOOL)a2 modifyAllowancesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queueFromCurrentConnection:(id)a0 remoteTextInputSessionWithID:(id)a1 didUpdateServiceOptions:(id)a2;
- (BOOL)_remoteTextEditingIsAllowed;
- (void)_updateAttributesForSessionWithID:(id)a0;
- (void)_updateTextForSessionWithID:(id)a0;
- (void)addMachNames:(id)a0;
- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (void)endAllowingRemoteTextInput:(id)a0 completion:(id /* block */)a1;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)enumerateConnections:(id)a0 force:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateServices:(id)a0 force:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)hasActiveSessionWithID:(id)a0;
- (void)invalidateConnections;
- (void)notifyServiceOfPause:(BOOL)a0 withReason:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddRTISupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didAddSupplementalLexicon:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didUpdateServiceOptions:(id)a1;
- (oneway void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1;
- (void)remoteTextInputSessionWithID:(id)a0 performInputOperation:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)remoteTextInputSessionWithID:(id)a0 textSuggestionsChanged:(id)a1;
- (void)removeMachNames:(id)a0;
- (void)setEnvironmentEnabled:(BOOL)a0 withReason:(id)a1;
- (void)setEnvironmentOptions:(unsigned long long)a0 withReason:(id)a1 completion:(id /* block */)a2;
- (oneway void)updateDefaultDocumentRequest:(id)a0;

@end
