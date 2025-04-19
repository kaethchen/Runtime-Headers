@class CSUTextEncoder, NSObject;
@protocol OS_dispatch_queue;

@interface MADSharedTextEncoder : NSObject {
    unsigned long long _version;
    CSUTextEncoder *_textEncoder;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _extendedContextLength;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isWarm;
}

@property (readonly, nonatomic) BOOL isWarm;

+ (unsigned long long)contextLength:(BOOL)a0;
+ (long long)revisionForVersion:(unsigned long long)a0;
+ (id)textEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)loadResources:(id *)a0;
- (BOOL)_runOnInput:(id)a0 output:(id *)a1 error:(id *)a2;
- (id)initWithTextEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(BOOL)a1;
- (BOOL)runOnInput:(id)a0 output:(id *)a1 error:(id *)a2;

@end
