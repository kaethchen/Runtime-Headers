@class NSView;

@interface ASKMouseTracker : NSObject {
    NSView *_view;
    long long _trackingTag;
}

- (void)dealloc;
- (void)finalize;
- (void)frameChanged:(id)a0;
- (id)initWithView:(id)a0;

@end
