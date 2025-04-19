@class NSArray;

@interface ATXWatchFace : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 complications:(id)a1 selected:(BOOL)a2;
- (BOOL)isEqualToATXWatchFace:(id)a0;

@end
