@class NSTextField, NSMutableDictionary, NSBox, NSProgressIndicator, NSButton, NSStackView;

@interface SidecarPopoverViewController : NSViewController {
    NSMutableDictionary *_imageViewCache;
    NSBox *_horizontalLine;
    NSStackView *_imageStack;
    NSProgressIndicator *_progress;
    NSTextField *_textField;
    unsigned char _deallocating : 1;
}

@property (retain) NSButton *cancelButton;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)loadView;
- (void)update;
- (void)_showProgress;
- (id)imageViewForDeviceType:(id)a0;

@end
