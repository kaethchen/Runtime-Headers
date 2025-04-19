@interface NSTouchBarItemOverlayOptions : NSObject <NSSecureCoding, NSCopying> {
    long long _type;
    struct CGPoint { double x; double y; } _point;
    long long _edge;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) const struct CGPoint { double x0; double x1; } *point;
@property (readonly) long long edge;

+ (id)standardOptions;
+ (id)overlayOptionsWithPoint:(struct CGPoint { double x0; double x1; })a0 edge:(long long)a1;
+ (id)popoverOptionsWithPoint:(struct CGPoint { double x0; double x1; })a0 edge:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 point:(const struct CGPoint { double x0; double x1; } *)a1 edge:(long long)a2;

@end
