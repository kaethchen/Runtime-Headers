@class NSColor;

@interface NSTextEncapsulation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long scale;
@property unsigned long long platterSize;
@property unsigned long long shape;
@property unsigned long long style;
@property double lineWeight;
@property double minimumWidth;
@property (copy) NSColor *color;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShape:(unsigned long long)a0;

@end
