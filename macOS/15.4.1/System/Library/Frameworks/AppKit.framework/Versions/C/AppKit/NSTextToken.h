@class NSString, NSImage, NSMenu;

@interface NSTextToken : NSObject <NSCopying>

@property (copy, nonatomic) id representedObject;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSImage *image;
@property (retain, nonatomic) NSMenu *menu;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRepresentedValue:(id)a0 title:(id)a1;
- (id)initWithRepresentedObject:(id)a0 title:(id)a1;

@end
