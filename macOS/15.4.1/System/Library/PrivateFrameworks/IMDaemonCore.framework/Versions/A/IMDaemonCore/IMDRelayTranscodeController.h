@interface IMDRelayTranscodeController : NSObject

+ (id)sharedInstance;

- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 target:(long long)a2 transcoderUserInfo:(id)a3 isSticker:(BOOL)a4 highQualityMaxByteSize:(unsigned long long)a5 lowQualityMaxByteSize:(unsigned long long)a6 representations:(long long)a7 completionBlock:(id /* block */)a8;

@end
