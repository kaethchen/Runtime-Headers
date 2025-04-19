@interface SCDisplay : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _displayID;
    long long _width;
    long long _height;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int displayID;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)initWithDict:(id)a0;
- (BOOL)isEqualToSCDisplay:(id)a0;

@end
