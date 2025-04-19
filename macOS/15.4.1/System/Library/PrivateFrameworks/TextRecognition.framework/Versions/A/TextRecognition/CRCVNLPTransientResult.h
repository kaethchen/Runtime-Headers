@class NSString, CVNLPTextDecodingResult, NSObject, CVNLPActivationMatrix;
@protocol OS_dispatch_semaphore;

@interface CRCVNLPTransientResult : NSObject <CRTextRecognizerDecodingTransientResult> {
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } activationsBuffer;
    struct optional<espresso_buffer_t> { union { char __null_state_; struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } __val_; } ; BOOL __engaged_; } indexBuffer;
}

@property (retain, nonatomic) CVNLPTextDecodingResult *greedyDecodingResult;
@property (retain, nonatomic) CVNLPActivationMatrix *activationMatrix;
@property (retain, nonatomic) NSString *decodingLocale;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *languageRecognitionActiveSem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
