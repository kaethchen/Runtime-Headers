@class IMHandle, NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface IMAVChatProxy : NSObject {
    NSDictionary *_info;
}

@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) NSString *conferenceID;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) NSDate *dateConnected;
@property (readonly, nonatomic) NSDate *dateEnded;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) IMHandle *initiatorIMHandle;
@property (readonly, nonatomic) IMHandle *otherIMHandle;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isStateFinal;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (nonatomic, setter=setMute:) BOOL isMute;
@property (readonly, nonatomic) NSNumber *dataUploaded;
@property (readonly, nonatomic) NSNumber *dataDownloaded;
@property (nonatomic) double invitationTimeoutTime;
@property (nonatomic) double connectionTimeoutTime;
@property (nonatomic, getter=isRelayed) BOOL relayed;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)account;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)declineInvitation;
- (void)endChat;
- (void)updateWithInfo:(id)a0;
- (BOOL)_isCallUpgradeTo:(id)a0;
- (BOOL)_isProxy;
- (void)endChatWithReason:(unsigned int)a0;
- (void)finalUpdate;
- (void)invite:(id)a0 additionalPeers:(id)a1;
- (void)invite:(id)a0 additionalPeers:(id)a1 excludingPushTokens:(id)a2;
- (void)inviteAll;
- (void)setLocalAspectRatio:(struct CGSize { double x0; double x1; })a0 cameraOrientation:(unsigned int)a1 cameraType:(unsigned int)a2;

@end
