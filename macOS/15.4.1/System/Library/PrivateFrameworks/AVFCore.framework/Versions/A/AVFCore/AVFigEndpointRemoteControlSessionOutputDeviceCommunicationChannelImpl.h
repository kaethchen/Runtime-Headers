@class NSString, AVOutputDeviceCommunicationChannel;

@interface AVFigEndpointRemoteControlSessionOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl> {
    struct OpaqueFigEndpointRemoteControlSession { } *_remoteControlSession;
}

@property (weak) AVOutputDeviceCommunicationChannel *parentChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)_didReceiveData:(id)a0;
- (void)_didCloseCommunicationChannel;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession { } *)a0;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
