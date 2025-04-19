@class NSColor, NSImage;

@interface CNAutocompletePresentation : NSObject

@property (class, readonly) CNAutocompletePresentation *pending;
@property (class, readonly) CNAutocompletePresentation *failure;
@property (class, readonly) CNAutocompletePresentation *usesSMS;
@property (class, readonly) CNAutocompletePresentation *usesFaceTime;
@property (class, readonly) CNAutocompletePresentation *emphasized;

@property (readonly, nonatomic) NSColor *resultLabelColor;
@property (readonly, nonatomic) NSImage *image;

+ (id)presentationForType:(long long)a0;
+ (id)presentationImageWithSymbolName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabelColor:(id)a0;
- (id)initWithLabelColor:(id)a0 andImage:(id)a1;

@end
