@interface NSHackyPopoverTouchBarItem : NSPopoverTouchBarItem {
    unsigned char _visible : 1;
}

@property (getter=isVisible) BOOL visible;

@end
