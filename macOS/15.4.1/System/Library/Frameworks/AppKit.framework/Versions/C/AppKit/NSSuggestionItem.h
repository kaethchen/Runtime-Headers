@class NSString, NSAttributedString, NSImage;

@interface NSSuggestionItem : NSObject <NSCopying>

@property (copy) id representedObject;
@property (copy) NSString *title;
@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSString *secondaryTitle;
@property (copy) NSAttributedString *attributedSecondaryTitle;
@property (copy) NSString *toolTip;
@property (copy) NSImage *image;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRepresentedValue:(id)a0 title:(id)a1;
- (id)initWithRepresentedObject:(id)a0 attributedTitle:(id)a1;
- (id)initWithRepresentedObject:(id)a0 title:(id)a1;
- (id)initWithRepresentedValue:(id)a0 attributedTitle:(id)a1;

@end
