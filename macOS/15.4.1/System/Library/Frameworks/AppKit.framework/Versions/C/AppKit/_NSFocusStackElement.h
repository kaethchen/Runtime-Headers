@class NSView, NSWindow;

@interface _NSFocusStackElement : NSObject {
    NSView *_view;
    NSWindow *_originalWindow;
    unsigned long long _errorData;
    BOOL _valid;
}

@end
