@class NSString, FIRadialProgressLayer;

@interface FIRadialProgressView : FI_TUpdateLayerView <CALayerDelegate, NSViewLayerContentScaleDelegate> {
    FIRadialProgressLayer *_progressLayer;
}

@property (nonatomic) double percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
