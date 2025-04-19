@class NSString, NSImage;

@interface PXBlockActionConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ canPerformBlock;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (nonatomic, getter=isSelected) BOOL selected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
