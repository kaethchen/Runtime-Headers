@class NSImage, NSString;

@interface ABCardViewImageResult : NSObject <NSCopying>

@property (readonly, retain) NSImage *image;
@property (readonly, copy) NSString *photoIdentifier;
@property (readonly, getter=isPlaceholder) BOOL placeholder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 photoIdentifier:(id)a1 isPlaceholder:(BOOL)a2;

@end
