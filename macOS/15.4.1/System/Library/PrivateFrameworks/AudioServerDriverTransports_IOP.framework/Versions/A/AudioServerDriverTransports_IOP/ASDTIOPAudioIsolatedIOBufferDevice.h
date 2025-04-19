@interface ASDTIOPAudioIsolatedIOBufferDevice : ASDTIOService {
    struct unique_ptr<ASDT::IOPAudio::IsolatedIOBuffer::UserClient, std::default_delete<ASDT::IOPAudio::IsolatedIOBuffer::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::IsolatedIOBuffer::UserClient *, std::default_delete<ASDT::IOPAudio::IsolatedIOBuffer::UserClient>> { struct UserClient *__value_; } __ptr_; } _userClient;
}

@property (readonly, nonatomic) void *userClient;

+ (id)forIOObject:(unsigned int)a0 andIDValue:(id)a1;

- (void).cxx_destruct;
- (void)close;
- (BOOL)open;
- (id).cxx_construct;
- (id)initForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (BOOL)setupIO;
- (BOOL)getStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (BOOL)setStreamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 withBufferFrameSize:(unsigned int)a1;
- (BOOL)setupClientIO:(unsigned long long)a0 withBufferFrameSize:(unsigned int)a1;
- (BOOL)teardownClientIO:(unsigned long long)a0;
- (BOOL)teardownIO;

@end
