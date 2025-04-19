@class NSColor, EMCategory;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell

@property (nonatomic) unsigned long long attachmentCellColor;
@property BOOL neverShowSeparator;
@property (retain, nonatomic) NSColor *foregroundColor;
@property (nonatomic) BOOL isFromAddress;
@property (nonatomic) long long businessID;
@property (retain, nonatomic) EMCategory *category;

+ (id)colorForWarning;
+ (id)colorForError;
+ (id)colorForExternalDomain;

- (void).cxx_destruct;
- (id)_textAttributes;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)tokenTintColor;
- (BOOL)_finalizeStyleTextOptions:(id)a0;

@end
