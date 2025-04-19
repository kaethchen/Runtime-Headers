@class NSDictionary;

@interface SOWebLinkButton : NSButton

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *mouseOverAttributes;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)awakeFromNib;
- (void)cursorUpdate:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFont:(id)a0;
- (void)sizeToFit;
- (void)updateTrackingAreas;
- (void)_initializeButtonStyle;
- (void)updateAttributedTitle:(BOOL)a0;

@end
