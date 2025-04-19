@class NSTokenAttachment, NSImage, NSString, PXSearchTokenRepresentedObject, NSAttributedString;

@interface PXSearchToken : NSObject

@property (retain, nonatomic) NSTokenAttachment *searchObject;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) PXSearchTokenRepresentedObject *representedObject;

- (void).cxx_destruct;
- (id)initWithAttributedText:(id)a0 searchObject:(id)a1 representedObject:(id)a2;
- (id)initWithText:(id)a0 image:(id)a1 representedObject:(id)a2;
- (id)initWithText:(id)a0 searchObject:(id)a1 representedObject:(id)a2;
- (id)textValue;

@end
