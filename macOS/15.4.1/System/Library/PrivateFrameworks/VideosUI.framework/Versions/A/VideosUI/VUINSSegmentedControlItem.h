@class NSString, NSImage;

@interface VUINSSegmentedControlItem : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) BOOL isSymbolImage;
@property (retain, nonatomic) NSString *accessibilityTitle;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 image:(id)a2 isSymbolImage:(BOOL)a3 accessibilityTitle:(id)a4;

@end
