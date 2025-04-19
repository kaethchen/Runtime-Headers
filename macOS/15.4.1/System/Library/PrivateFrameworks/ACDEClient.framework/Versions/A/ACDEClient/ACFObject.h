@interface ACFObject : NSObject <NSCoding, NSCopying>

+ (id)keys;
+ (id)keysForDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
