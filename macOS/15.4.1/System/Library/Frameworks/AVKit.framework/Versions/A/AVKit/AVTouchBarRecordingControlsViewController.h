@class NSButton, NSMutableArray;
@protocol AVTouchBarRecordingControlsControllingInternal;

@interface AVTouchBarRecordingControlsViewController : NSViewController {
    id<AVTouchBarRecordingControlsControllingInternal> _captureController;
    BOOL _optionKeyPressed;
    NSButton *_recordButton;
    NSMutableArray *_bindings;
}

@property (retain) NSButton *recordButton;
@property (readonly, getter=isRedDotViewHidden) BOOL redDotViewHidden;
@property (retain) id<AVTouchBarRecordingControlsControllingInternal> captureController;
@property (getter=isOptionKeyPressed) BOOL optionKeyPressed;

+ (id)keyPathsForValuesAffectingRedDotViewHidden;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)_syncRecordButtonWithCaptureStatus;
- (void)_unbindAllObjects;

@end
