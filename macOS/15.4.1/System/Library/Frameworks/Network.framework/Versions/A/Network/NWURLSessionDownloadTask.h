@interface NWURLSessionDownloadTask : NWURLSessionTask

+ (BOOL)isSubclassOfClass:(Class)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (id)errorWithResumeData:(id)a0;

@end
