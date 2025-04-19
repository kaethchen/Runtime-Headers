@class NSURL;

@interface NWURLSessionUploadTask : NWURLSessionDataTask {
    BOOL _isResuming;
    NSURL *_resumeURL;
}

+ (BOOL)isSubclassOfClass:(Class)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)errorWithResumeData:(id)a0;

@end
