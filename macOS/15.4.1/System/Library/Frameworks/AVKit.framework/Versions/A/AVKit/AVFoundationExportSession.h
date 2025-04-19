@class NSTimer, NSString, AVAsset, NSURL, AVAssetExportSession, AVAudioMix, AVVideoComposition;
@protocol AVExportSessionHelperDelegate;

@interface AVFoundationExportSession : NSObject <AVExportSessionHelper> {
    NSURL *_outputURL;
    AVAssetExportSession *_avSession;
    id<AVExportSessionHelperDelegate> _delegate;
    AVAsset *_sourceAsset;
    AVVideoComposition *_sourceVideoComposition;
    AVAudioMix *_sourceAudioMix;
    NSTimer *_exportProgressTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportPresetForAsset:(id)a0 videoComposition:(id)a1;

- (void).cxx_destruct;
- (void)updateProgress:(id)a0;
- (void)cancel;
- (void)createExportSessionwithPresetIdentifier:(id)a0 exportTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 videoComposition:(id)a2 audioMix:(id)a3;
- (id)initWithAsset:(id)a0 videoComposition:(id)a1 audioMix:(id)a2 exportTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 sessionDelegate:(id)a4 outputURL:(id)a5;

@end
