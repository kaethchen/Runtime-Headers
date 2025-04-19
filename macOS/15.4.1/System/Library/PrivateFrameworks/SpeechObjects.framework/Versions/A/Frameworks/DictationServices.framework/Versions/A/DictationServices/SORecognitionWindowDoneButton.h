@class SORecognitionWindowDoneButtonHighlightView;

@interface SORecognitionWindowDoneButton : NSButton {
    SORecognitionWindowDoneButtonHighlightView *_highlightView;
}

- (void)dealloc;
- (void)layout;
- (BOOL)allowsVibrancy;

@end
