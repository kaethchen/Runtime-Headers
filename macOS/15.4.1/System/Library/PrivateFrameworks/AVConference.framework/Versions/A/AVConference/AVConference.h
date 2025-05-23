@class AVConferenceXPCClient, NSMutableDictionary, NSTimer, NSDictionary, CALayer, NSObject;
@protocol OS_dispatch_queue, AVConferenceDelegate;

@interface AVConference : NSObject {
    AVConferenceXPCClient *connection;
    id opaqueConf;
    BOOL useServer;
    id _delegate;
    NSDictionary *serverBag;
    BOOL _isUsingFrontCamera;
    NSMutableDictionary *_stateCacheForCallID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain) CALayer *networkQualityGraphLayer;
@property (retain) NSTimer *networkQualityUpdateTimer;
@property BOOL shouldDisplayNetworkQualityGraph;
@property (getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;
@property (nonatomic) NSObject<AVConferenceDelegate> *delegate;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;
@property (nonatomic) BOOL requiresWifi;
@property (readonly) long long inputAudioPowerSpectrumToken;
@property (readonly) long long outputAudioPowerSpectrumToken;
@property (readonly) int localFrameHeight;
@property (readonly) int localFrameWidth;
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property (readonly) unsigned int natType;

+ (void)setAudioSessionProperties:(id)a0;
+ (short)addressPointerFromBlob:(id)a0;
+ (unsigned int)doBlockingConnectionCheck;
+ (unsigned int)doBlockingConnectionCheck:(BOOL)a0;
+ (id)externalAddressForSelfConnectionBlob:(id)a0;
+ (BOOL)hasActiveAudioSession;
+ (void)refreshLoggingParameters;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (void)stopAudioSession;

- (void)dealloc;
- (id)init;
- (BOOL)setActive:(BOOL)a0;
- (BOOL)setServerInfo:(id)a0;
- (float)networkQuality;
- (id)localScreenAttributesForVideoAttributes:(id)a0;
- (void)setLocalScreenAttributes:(id)a0;
- (BOOL)getIsSendingAudio:(BOOL *)a0 callID:(long long)a1 error:(id *)a2;
- (id)statsForCallID:(long long)a0;
- (void)addGKSCallEvent:(id)a0 sessionID:(id)a1;
- (id)callMetadataForCallID:(long long)a0;
- (id)callStateForCallID:(id)a0;
- (void)cancelCallID:(long long)a0;
- (id)capabilitiesForCallID:(long long)a0;
- (id)convertBlobtoNewBlob:(id)a0;
- (id)convertBlobtoOldBlob:(id)a0;
- (id)currentAudioInputDevice;
- (id)currentAudioOutputDevice;
- (void)deregisterBlocksForVCNotifications;
- (unsigned int)doBlockingConnectionCheck;
- (BOOL)getIsAudioPaused:(BOOL *)a0 callID:(long long)a1 error:(id *)a2;
- (BOOL)getIsVideoPaused:(BOOL *)a0 callID:(long long)a1 error:(id *)a2;
- (void)handleGKSConnectivitySettingsUpdate:(id)a0;
- (id)initWithClientUUID:(id)a0;
- (id)initWithClientUUID:(id)a0 transportType:(unsigned int)a1;
- (long long)initializeNewCall;
- (long long)initializeNewCallWithDeviceRole:(int)a0;
- (long long)initializeNewCallWithDeviceRole:(int)a0 reportingHierarchyToken:(id)a1;
- (void)inviteDictionaryForCallID:(long long)a0 remoteInviteDictionary:(id)a1 nonCellularCandidateTimeout:(double)a2 block:(id /* block */)a3 queue:(id)a4;
- (long long)lastActiveCallID;
- (void)listenForNotifications;
- (double)localBitrateForCallID:(long long)a0;
- (double)localFramerateForCallID:(long long)a0;
- (double)localPacketLossRateForCallID:(long long)a0;
- (double)networkQualityForCallID:(long long)a0;
- (id)newRandomParticipantID;
- (void)processCancelRelayRequest:(long long)a0 cancelDict:(id)a1 didOriginateRequest:(BOOL)a2;
- (void)processRelayRequestResponse:(long long)a0 responseDict:(id)a1 didOriginateRequest:(BOOL)a2;
- (void)processRelayUpdate:(long long)a0 updateDict:(id)a1 didOriginateRequest:(BOOL)a2;
- (void)processRemoteIPChange:(id)a0 callID:(long long)a1;
- (void)registerBlocksForVCNotifications;
- (unsigned char)relayedCallTypeForCallID:(long long)a0;
- (double)remoteBitrateForCallID:(long long)a0;
- (void)remoteCancelledCallID:(long long)a0;
- (int)remoteFrameHeightForCallID:(long long)a0;
- (int)remoteFrameWidthForCallID:(long long)a0;
- (double)remoteFramerateForCallID:(long long)a0;
- (double)remotePacketLossRateForCallID:(long long)a0;
- (void *)remoteVideoBackLayer;
- (void *)remoteVideoLayer;
- (double)roundTripTimeForCallID:(long long)a0;
- (void)sendARPLData:(id)a0 toCallID:(long long)a1;
- (void)sendData:(id)a0 forCallID:(long long)a1 encrypted:(BOOL)a2;
- (void)sendProtobuf:(id)a0 withType:(long long)a1 forCallID:(long long)a2;
- (void)serverDied;
- (void)serverReconnected;
- (BOOL)setAudioInputDevice:(id)a0;
- (BOOL)setAudioOutputDevice:(id)a0;
- (void)setCallReport:(long long)a0 withReport:(id)a1;
- (void)setCallState:(id)a0 forCallID:(id)a1;
- (void)setConferenceState:(unsigned int)a0 forCallID:(long long)a1;
- (void)setConferenceVisualRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCallID:(long long)a1;
- (void)setLastActiveCallID:(long long)a0;
- (BOOL)setPauseAudio:(BOOL)a0 callID:(long long)a1 error:(id *)a2;
- (BOOL)setPauseVideo:(BOOL)a0 callID:(long long)a1 error:(id *)a2;
- (void)setPeerCN:(id)a0 callID:(long long)a1;
- (void)setPeerProtocolVersion:(unsigned int)a0 forCallID:(long long)a1;
- (void)setPeerReportingIdentifier:(id)a0 sessionIdentifier:(id)a1 forCallID:(long long)a2;
- (void)setRelayedCallType:(unsigned char)a0 forCallID:(long long)a1;
- (void)setRemoteVideoBackLayer:(void *)a0;
- (void)setRemoteVideoLayer:(void *)a0;
- (BOOL)setSendingAudio:(BOOL)a0 callID:(long long)a1 error:(id *)a2;
- (void)setSessionID:(id)a0 callID:(long long)a1;
- (void)setSetSessionID:(id)a0 forCallID:(long long)a1;
- (void)shouldSendBlackFrames:(BOOL)a0 callID:(long long)a1;
- (BOOL)startConnectionWithCallID:(long long)a0 inviteData:(id)a1 isCaller:(BOOL)a2 capabilities:(id)a3 destination:(id)a4 error:(id *)a5;
- (BOOL)startConnectionWithCallID:(long long)a0 oldCallID:(long long)a1 usingInviteData:(id)a2 isCaller:(BOOL)a3 relayResponseDict:(id)a4 didOriginateRelayRequest:(BOOL)a5 capabilities:(id)a6 error:(id *)a7;
- (BOOL)startConnectionWithCallID:(long long)a0 oldCallID:(long long)a1 usingInviteData:(id)a2 isCaller:(BOOL)a3 relayResponseDict:(id)a4 didOriginateRelayRequest:(BOOL)a5 capabilities:(id)a6 idsSocket:(int)a7 destination:(id)a8 error:(id *)a9;
- (BOOL)startConnectionWithCallID:(long long)a0 oldCallID:(long long)a1 usingInviteData:(id)a2 isCaller:(BOOL)a3 relayResponseDict:(id)a4 didOriginateRelayRequest:(BOOL)a5 capabilities:(id)a6 idsSocket:(int)a7 error:(id *)a8;
- (BOOL)startConnectionWithCallID:(long long)a0 usingInviteData:(id)a1 isCaller:(BOOL)a2 relayResponseDict:(id)a3 didOriginateRelayRequest:(BOOL)a4 capabilities:(id)a5 error:(id *)a6;
- (BOOL)startConnectionWithCallID:(long long)a0 usingInviteData:(id)a1 isCaller:(BOOL)a2 relayResponseDict:(id)a3 didOriginateRelayRequest:(BOOL)a4 capabilities:(id)a5 idsSocket:(int)a6 error:(id *)a7;
- (void)startNetworkQualityUpdateTimer;
- (void)stopCallID:(long long)a0;
- (void)stopListeningForNotifications;
- (void)stopNetworkQualityUpdateTimer;
- (void)updateCapabilities:(id)a0 forCallID:(long long)a1;
- (void)updateGKSConnectivitySettings;
- (BOOL)updateNetworkQualityGraph;
- (void)videoConference:(id)a0 cancelRelayRequest:(unsigned int)a1 requestDict:(id)a2;
- (void)videoConference:(id)a0 closeConnectionForCallID:(long long)a1;
- (void)videoConference:(id)a0 didChangeLocalVariablesForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 didReceiveARPLData:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didReceiveData:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didReceiveFirstRemoteFrameForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 didRemoteScreenAttributesChange:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didRemoteVideoAttributesChange:(id)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 didStartSession:(BOOL)a1 withCallID:(unsigned int)a2 error:(id)a3;
- (void)videoConference:(id)a0 didStartSession:(BOOL)a1 withCallID:(unsigned int)a2 withUserInfo:(id)a3 error:(id)a4;
- (void)videoConference:(id)a0 didStopWithCallID:(unsigned int)a1 error:(id)a2;
- (void)videoConference:(id)a0 didStopWithCallID:(unsigned int)a1 error:(id)a2 callMetadata:(id)a3;
- (void)videoConference:(id)a0 inititiateRelayRequest:(unsigned int)a1 requestDict:(id)a2;
- (void)videoConference:(id)a0 isRemoteAudioBelowThreshold:(BOOL)a1;
- (void)videoConference:(id)a0 localAudioEnabled:(BOOL)a1 forCallID:(unsigned int)a2 error:(id)a3;
- (void)videoConference:(id)a0 localIPChange:(id)a1 withCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 reinitializeCallForCallID:(unsigned int)a1;
- (void)videoConference:(id)a0 remoteAudioEnabled:(BOOL)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteAudioPaused:(BOOL)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteCallingModeChanged:(unsigned int)a1 forCallID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteMediaStalled:(BOOL)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 remoteVideoPaused:(BOOL)a1 callID:(unsigned int)a2;
- (void)videoConference:(id)a0 sendRelayUpdate:(unsigned int)a1 updateDict:(id)a2;
- (void)videoConference:(id)a0 updateInputFrequencyLevel:(id)a1;
- (void)videoConference:(id)a0 updateInputMeterLevel:(float)a1;
- (void)videoConference:(id)a0 updateOutputFrequencyLevel:(id)a1;
- (void)videoConference:(id)a0 updateOutputMeterLevel:(float)a1;
- (void)videoConference:(id)a0 videoQualityNotificationForCallID:(unsigned int)a1 isDegraded:(BOOL)a2 isRemote:(BOOL)a3;
- (void)videoConference:(id)a0 withCallID:(long long)a1 didPauseAudio:(BOOL)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(long long)a1 didPauseVideo:(BOOL)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(long long)a1 isSendingAudio:(BOOL)a2 error:(id)a3;
- (void)videoConference:(id)a0 withCallID:(unsigned int)a1 networkHint:(BOOL)a2;
- (long long)videoStreamTokenForCallID:(long long)a0;
- (void)warmupForCall;

@end
