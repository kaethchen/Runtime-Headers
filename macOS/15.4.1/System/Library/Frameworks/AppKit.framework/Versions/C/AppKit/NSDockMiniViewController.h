@class NSView, NSWindow;

@interface NSDockMiniViewController : NSObject {
    NSWindow *_window;
    unsigned int _contextid;
}

@property (retain, nonatomic) NSView *view;
@property (readonly, nonatomic) struct { long long x0; unsigned int x1; } miniViewIdentifier;

- (void)dealloc;
- (void)_frameChanged;
- (void)_setShown:(BOOL)a0;
- (id)initWithView:(id)a0;
- (struct { long long x0; unsigned int x1; })miniViewIdentifier;

@end
