@class NSResponder;

@interface SHKViewServiceWindow : NSWindow

@property (retain, nonatomic) NSResponder *cachedFirstResponder;
@property (nonatomic) BOOL canSetFirstResponder;

- (void).cxx_destruct;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeCachedResponderFirstResponder;

@end
