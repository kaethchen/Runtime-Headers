@class NSString, NSImage;

@interface MEMailComposeToolbarItemInfo : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *tooltip;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 image:(id)a1 tooltip:(id)a2;

@end
