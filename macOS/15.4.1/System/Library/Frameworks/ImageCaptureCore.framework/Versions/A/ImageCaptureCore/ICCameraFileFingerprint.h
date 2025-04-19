@class NSString;

@interface ICCameraFileFingerprint : NSObject {
    long long _zeroByteFileFingerprintOnce;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *zeroByteFileFingerprint;

- (id)init;
- (void).cxx_destruct;
- (void **)_createSignatureGenerator;
- (id)fingerprintForData:(id)a0 error:(id *)a1;
- (id)fingerprintForFD:(int)a0 error:(id *)a1;
- (id)fingerprintForFileAtURL:(id)a0 error:(id *)a1;
- (id)fixupFileHandleError:(id)a0;

@end
