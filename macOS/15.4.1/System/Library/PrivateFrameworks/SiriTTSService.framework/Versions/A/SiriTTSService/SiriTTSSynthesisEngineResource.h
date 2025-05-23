@class NSString;

@interface SiriTTSSynthesisEngineResource : NSObject

@property struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource *__ptr_; struct __shared_weak_count *__cntrl_; } handle;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *mimeType;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
