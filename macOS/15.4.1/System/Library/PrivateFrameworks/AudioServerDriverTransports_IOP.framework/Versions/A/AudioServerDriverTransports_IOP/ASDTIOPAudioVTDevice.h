@class NSDictionary;

@interface ASDTIOPAudioVTDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::VoiceTrigger::UserClient, std::default_delete<ASDT::IOPAudio::VoiceTrigger::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::VoiceTrigger::UserClient *, std::default_delete<ASDT::IOPAudio::VoiceTrigger::UserClient>> { struct UserClient *__value_; } __ptr_; } _userClient;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _openLock;
    unsigned int _openCount;
}

@property (readonly, nonatomic) NSDictionary *eventInfo;
@property (readonly, nonatomic) BOOL isConfigured;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (BOOL)open;
- (BOOL)setEnabled:(unsigned int)a0;
- (id).cxx_construct;
- (BOOL)setDebugEnabled:(unsigned int)a0;
- (BOOL)setConfigurationInfo:(id)a0;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (BOOL)getChannelMask:(unsigned int *)a0;
- (id)getConfigurationInfo;
- (BOOL)getDebugEnabled:(unsigned int *)a0;
- (BOOL)getIsEnabled:(unsigned int *)a0;
- (BOOL)getModelCRC:(unsigned int *)a0;
- (BOOL)setPhraseDetectEventBlock:(id /* block */)a0;

@end
