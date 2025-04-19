@interface TextFieldThatSelectsAllWhenEditing : NSTextField {
    BOOL _isHandlingMouseDownEvent;
}

- (void)mouseDown:(id)a0;

@end
