@class NSString, NSImage, NSMutableArray;
@protocol AVTouchBarRecordingControlsControllingInternal, AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate;

@interface AVTouchBarAudioCaptureDeviceSelectionButtonViewController : NSViewController {
    NSMutableArray *_bindings;
}

@property (readonly) BOOL showsImage;
@property (readonly) double width;
@property (readonly) NSString *title;
@property (readonly) NSImage *image;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) BOOL hasChevron;
@property (retain) id<AVTouchBarRecordingControlsControllingInternal> captureController;
@property (weak, nonatomic) id<AVTouchBarAudioCaptureDeviceSelectionButtonViewControllerDelegate> delegate;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingEnabled;
+ (id)keyPathsForValuesAffectingHasChevron;
+ (id)keyPathsForValuesAffectingShowsImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)actionButton:(id)a0;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)_unbindAllObjects;

@end
