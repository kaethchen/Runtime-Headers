@interface SSRRPISampledAudioUploader : NSObject

+ (void)cleanUpAudioOnAndBeforeDate:(id)a0 error:(id *)a1;
+ (void)purgeOldAudioData;
+ (void)removeAllAudioDataWithError:(id *)a0;
+ (void)uploadAudioFileWithRequestId:(id)a0 audioId:(id)a1 date:(id)a2 completion:(id /* block */)a3;

@end
