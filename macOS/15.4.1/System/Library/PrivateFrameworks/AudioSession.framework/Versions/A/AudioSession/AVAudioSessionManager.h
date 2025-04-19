@interface AVAudioSessionManager : NSObject {
    struct synchronized<std::shared_ptr<as::client::SessionManager>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::shared_ptr<as::client::SessionManager>>> { struct shared_ptr_mutex<as::client::KVOMutex> { struct shared_ptr<as::client::KVOMutex> { struct KVOMutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<as::client::SessionManager> { struct SessionManager *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } _guarded_impl;
}

@property (readonly, nonatomic, getter=isProcessAudioMuted) BOOL processAudioMuted;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithImpl:(struct shared_ptr<as::client::SessionManager> { struct SessionManager *x0; struct __shared_weak_count *x1; })a0;
- (id)retrieveSessionWithToken:(unsigned int)a0;
- (id)allSessionTokens;
- (id)implicitSessionForDeviceWithUID:(id)a0;
- (BOOL)muteProcessAudio:(BOOL)a0 error:(id *)a1;
- (void)triggerMediaServicesResetNotifications:(int)a0 daemonName:(id)a1;

@end
