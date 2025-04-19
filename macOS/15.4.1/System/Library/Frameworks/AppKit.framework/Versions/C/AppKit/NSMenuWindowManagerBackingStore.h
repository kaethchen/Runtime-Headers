@interface NSMenuWindowManagerBackingStore : NSObject {
    struct CGContext { } *_ctx;
    struct CGImage { } *_img;
}

- (void)dealloc;
- (id)init;

@end
