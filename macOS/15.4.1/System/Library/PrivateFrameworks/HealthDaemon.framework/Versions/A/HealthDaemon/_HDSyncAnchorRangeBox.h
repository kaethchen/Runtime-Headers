@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding, NSCopying> {
    struct HDSyncAnchorRange { long long start; long long end; } _anchorRange;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
