@class NSArray;
@protocol MTLTexture;

@interface PTEffectRenderRequest : NSObject {
    struct __CFDictionary { } *_detectedObjects;
}

@property double frameTimeSeconds;
@property unsigned long long effectType;
@property struct __CVBuffer { } *inColorBuffer;
@property struct __CVBuffer { } *outColorBuffer;
@property struct __CVBuffer { } *inExternalDisparityBuffer;
@property struct __CVBuffer { } *inScreenCaptureBuffer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inScreenCaptureRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inReactionVideoRect;
@property struct CGSize { double width; double height; } inReactionColorSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outColorROI;
@property struct __CVBuffer { } *outPersonSegmentationMatteBuffer;
@property struct __CVBuffer { } *inBackgroundReplacementBuffer;
@property struct __CVBuffer { } *outBackgroundReplacementPostProcessingBuffer;
@property BOOL outBackgroundReplacementPostProcessingBufferUpdated;
@property struct __CFDictionary { } *detectedObjects;
@property BOOL focusOnAll;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property long long effectQuality;
@property float apertureSDOF;
@property float relightStrengthStudioLight;
@property (retain, nonatomic) NSArray *reactions;
@property unsigned long long gestureCount;
@property float luxLevel;
@property float focalLength;
@property BOOL outColorBufferWriteSkipped;
@property (retain, nonatomic) id<MTLTexture> inBilbyAlphaMaskTexture;
@property unsigned long long presenterOverlayMode;
@property BOOL suppressGestureTriggeredReactions;
@property BOOL bilbyFloatingMode;

+ (float)apertureSDOFDefault;
+ (void /* unknown type, empty encoding */)apertureSDOFRange;
+ (float)relightStrengthStudioLightDefault;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)detectedObjectsAsString;
- (void)logPixelbufferMetadata:(id)a0;
- (void /* unknown type, empty encoding */)reactionsCombinedCropRect;
- (float)remappedAperture;

@end
