@class NSTimer;
@protocol SOFaceTimeCallHandlerDelegate;

@interface SOFaceTimeCallHandler : NSObject

@property (weak, nonatomic) NSTimer *faceTimeMultiwayCallTimer;
@property (weak, nonatomic) id<SOFaceTimeCallHandlerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasActiveFaceTimeCall;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)chat;
- (void)_startFaceTimeMultiwayCallTimer;
- (BOOL)_conversationStateDidChange:(id)a0;
- (void)_faceTimeMultiwayCallTimerDidFire:(id)a0;
- (void)_handleMultiwayConversationChanged:(id)a0;
- (BOOL)_shouldStartFaceTimeMultiwayCallTimer;
- (void)_startFaceTimeMultiwayCallTimerIfNeeded;
- (void)_stopFaceTimeMultiwayCallTimer;
- (BOOL)hasActiveFaceTimeCall;
- (void)infoButtonClicked;
- (void)joinCall;
- (void)registerForEventNotifications;

@end
