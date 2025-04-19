@class CCSet, NSMutableSet;

@interface CCSetDistribution : NSObject {
    CCSet *_set;
    struct shared_ptr<std::vector<unsigned short>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _contentLengths;
    struct shared_ptr<std::vector<unsigned short>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _metaContentLengths;
    unsigned long long _sumContentLength;
    unsigned long long _sumMetaContentLength;
    unsigned long long _localContentCount;
    unsigned long long _deviceContentCount;
    NSMutableSet *_devices;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)compute;
- (id)_sanitizedEncodedDescriptors;
- (void)addSetChange:(id)a0;
- (id)initWithSet:(id)a0 sharedItemCount:(unsigned long long)a1 localInstanceCount:(unsigned long long)a2;

@end
