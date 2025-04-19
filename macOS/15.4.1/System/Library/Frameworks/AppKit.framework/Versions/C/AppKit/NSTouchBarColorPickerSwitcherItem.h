@class NSImage, NSString;

@interface NSTouchBarColorPickerSwitcherItem : NSObject

@property (copy) NSImage *image;
@property (copy) NSString *label;

+ (id)itemWithLabel:(id)a0 image:(id)a1;

- (void)dealloc;

@end
