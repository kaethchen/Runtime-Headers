@class NSMutableDictionary, AVBInterface, NSDictionary, AVB17221AEMEntity;

@interface AVBBuiltInAVDECCEntity : AVBATDECCEntity {
    NSDictionary *_controllerMappings;
    NSMutableDictionary *_localInputStreams;
    NSMutableDictionary *_localOutputStreams;
    NSMutableDictionary *_remoteInputStreams;
    NSMutableDictionary *_remoteOutputStreams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamsLock;
}

@property (retain) AVB17221AEMEntity *remoteModel;
@property (retain) AVB17221AEMEntity *localModel;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) AVBInterface *selectedInterface;

+ (id)keyPathsForValuesAffectingRemoteModel;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)clearAllConnectionsOnInterface:(id)a0;
- (void)setRemoteModel:(id)a0;
- (BOOL)_connectLocalInputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)_connectLocalOutputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)_connectRemoteInputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)_connectRemoteOutputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)_connectStreamWithLocalInputIndex:(unsigned short)a0 andRemoteOutputIndex:(unsigned short)a1 streamingWait:(BOOL)a2 classB:(BOOL)a3 onInterface:(id)a4;
- (BOOL)_connectStreamWithRemoteInputIndex:(unsigned short)a0 andLocalOutputIndex:(unsigned short)a1 streamingWait:(BOOL)a2 classB:(BOOL)a3 onInterface:(id)a4;
- (BOOL)_disconnectLocalInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)_disconnectLocalOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)_disconnectRemoteInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)_disconnectRemoteOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)_disconnectStreamWithLocalInputIndex:(unsigned short)a0 andRemoteOutputIndex:(unsigned short)a1 onInterface:(id)a2;
- (BOOL)_disconnectStreamWithRemoteInputIndex:(unsigned short)a0 andLocalOutputIndex:(unsigned short)a1 onInterface:(id)a2;
- (BOOL)activateEntityOnInterface:(id)a0;
- (BOOL)connectAllStreamsOnInterface:(id)a0;
- (BOOL)connectAllStreamsStreamingWait:(BOOL)a0 onInterface:(id)a1;
- (BOOL)connectAllStreamsTuneMaxTransitTime:(BOOL)a0 onInterface:(id)a1;
- (BOOL)connectLocalInputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)connectLocalOutputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)connectRemoteInputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (BOOL)connectRemoteOutputStreamWithIndex:(unsigned short)a0 streamingWait:(BOOL)a1 classB:(BOOL)a2 onInterface:(id)a3;
- (void)createLocalModelOnInterface:(id)a0;
- (BOOL)deactivateEntityOnInterface:(id)a0;
- (BOOL)disconnectAllStreamsOnInterface:(id)a0;
- (BOOL)disconnectLocalInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)disconnectLocalOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)disconnectRemoteInputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)disconnectRemoteOutputStreamWithIndex:(unsigned short)a0 onInterface:(id)a1;
- (id)initWithEntity:(id)a0 andInterface:(id)a1;
- (id)localAECPAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)localAppleAAECommandMessageForCommandType:(unsigned short)a0;
- (id)localObjectsForRemoteObject:(id)a0;
- (id)remoteAECPAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)remoteAppleAAECommandMessageForCommandType:(unsigned short)a0;
- (id)remoteModel;
- (id)remoteObjectsForLocalObject:(id)a0;
- (BOOL)startAllStreamsOnInterface:(id)a0;
- (BOOL)tuneAllStreamsOnInterface:(id)a0;

@end
