@class NSString, WK_RTCVideoCodecInfo;

@interface WK_RTCVideoEncoderH265 : NSObject <RTCVideoEncoder> {
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::default_delete<webrtc::BitrateAdjuster>> { struct __compressed_pair<webrtc::BitrateAdjuster *, std::default_delete<webrtc::BitrateAdjuster>> { struct BitrateAdjuster *__value_; } __ptr_; } _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    struct __CFString { } *_profile;
    id /* block */ _callback;
    int _width;
    int _height;
    struct OpaqueVTCompressionSession { } *_compressionSession;
    unsigned long long _mode;
    int framesLeft;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _nv12ScaleBuffer;
    BOOL _useAnnexB;
    BOOL _isLowLatencyEnabled;
    BOOL _needsToSendDescription;
    id /* block */ _descriptionCallback;
    id /* block */ _errorCallback;
    struct H265BitstreamParser { void /* function */ **_vptr$BitstreamParser; struct flat_map<unsigned int, webrtc::H265VpsParser::VpsState, std::less<void>, std::vector<std::pair<unsigned int, webrtc::H265VpsParser::VpsState>>> { struct vector<std::pair<unsigned int, webrtc::H265VpsParser::VpsState>, std::allocator<std::pair<unsigned int, webrtc::H265VpsParser::VpsState>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned int, webrtc::H265VpsParser::VpsState> *, std::allocator<std::pair<unsigned int, webrtc::H265VpsParser::VpsState>>> { void *__value_; } __end_cap_; } body_; } vps_; struct flat_map<unsigned int, webrtc::H265SpsParser::SpsState, std::less<void>, std::vector<std::pair<unsigned int, webrtc::H265SpsParser::SpsState>>> { struct vector<std::pair<unsigned int, webrtc::H265SpsParser::SpsState>, std::allocator<std::pair<unsigned int, webrtc::H265SpsParser::SpsState>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned int, webrtc::H265SpsParser::SpsState> *, std::allocator<std::pair<unsigned int, webrtc::H265SpsParser::SpsState>>> { void *__value_; } __end_cap_; } body_; } sps_; struct flat_map<unsigned int, webrtc::H265PpsParser::PpsState, std::less<void>, std::vector<std::pair<unsigned int, webrtc::H265PpsParser::PpsState>>> { struct vector<std::pair<unsigned int, webrtc::H265PpsParser::PpsState>, std::allocator<std::pair<unsigned int, webrtc::H265PpsParser::PpsState>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned int, webrtc::H265PpsParser::PpsState> *, std::allocator<std::pair<unsigned int, webrtc::H265PpsParser::PpsState>>> { void *__value_; } __end_cap_; } body_; } pps_; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } last_slice_qp_delta_; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } last_slice_pps_id_; } _h265BitstreamParser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setCallback:(id /* block */)a0;
- (void)flush;
- (void)setLowLatency:(BOOL)a0;
- (id)scalingSettings;
- (void)configureCompressionSession;
- (void)destroyCompressionSession;
- (long long)encode:(id)a0 codecSpecificInfo:(id)a1 frameTypes:(id)a2;
- (void)frameWasEncoded:(int)a0 flags:(unsigned int)a1 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 width:(int)a3 height:(int)a4 renderTimeMs:(long long)a5 timestamp:(unsigned int)a6 rotation:(long long)a7;
- (id)implementationName;
- (id)initWithCodecInfo:(id)a0;
- (long long)releaseEncoder;
- (int)resetCompressionSession;
- (int)setBitrate:(unsigned int)a0 framerate:(unsigned int)a1;
- (void)setBitrateBps:(unsigned int)a0;
- (void)setDescriptionCallback:(id /* block */)a0;
- (void)setEncoderBitrateBps:(unsigned int)a0;
- (void)setErrorCallback:(id /* block */)a0;
- (void)setUseAnnexB:(BOOL)a0;
- (long long)startEncodeWithSettings:(id)a0 numberOfCores:(int)a1;

@end
