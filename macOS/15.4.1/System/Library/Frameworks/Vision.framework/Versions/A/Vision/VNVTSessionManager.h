@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { struct __compressed_pair<SessionsHandler<VNVTPixelTransferSession> *, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { void *__value_; } __ptr_; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { struct __compressed_pair<SessionsHandler<VNVTPixelRotationSession> *, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { void *__value_; } __ptr_; } _pixelRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
