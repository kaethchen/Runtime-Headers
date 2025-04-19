@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMTranscodingAgentController : NSObject {
    NSArray *_transcoders;
    NSArray *_fallbackTranscoders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_findTranscoderForUTI:(id)a0;
- (void)_registerTranscoders;
- (void)decodeiMessageAppPayload:(id)a0 senderContext:(id)a1 bundleID:(id)a2 completionBlock:(id /* block */)a3;
- (void)generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 balloonBundleID:(id)a3 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; BOOL x5; })a4 completionBlock:(id /* block */)a5;
- (void)generatePreviewMetadata:(id)a0 destinationURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; BOOL x5; })a3 completionBlock:(id /* block */)a4;
- (void)generateSafeRender:(id)a0 outputURL:(id)a1 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; BOOL x5; })a2 completionBlock:(id /* block */)a3;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadURL:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)isMovieType:(id)a0;
- (BOOL)shouldProcessFileTransfer:(id)a0 utiType:(id)a1 transcoderUserInfo:(id)a2 target:(long long)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5 commonCapabilities:(id)a6;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(BOOL)a2 allowUnfilteredUTIs:(id)a3 target:(long long)a4 sizes:(id)a5 commonCapabilities:(id)a6 maxDimension:(unsigned long long)a7 transcoderUserInfo:(id)a8 fallback:(BOOL)a9 representations:(long long)a10 isLQMEnabled:(BOOL)a11 completionBlock:(id /* block */)a12;
- (void)transcodeFileTransferData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 fallBack:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)transcodeThumbnailFor:(id)a0 target:(long long)a1 allSizes:(id)a2 commonCapabilities:(id)a3 maxDimension:(unsigned long long)a4 transcoderUserInfo:(id)a5 isLQMEnabled:(BOOL)a6 outputURLs:(id)a7 outputContextInfo:(id)a8 attemptedTranscode:(BOOL)a9 additionalOutPutContext:(id)a10 completionBlock:(id /* block */)a11;
- (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;

@end
