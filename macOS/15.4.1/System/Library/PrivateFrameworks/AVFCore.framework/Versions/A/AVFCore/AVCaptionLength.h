@class AVCaptionLengthInternal;

@interface AVCaptionLength : NSObject <NSCopying, NSSecureCoding> {
    AVCaptionLengthInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long unitType;
@property (readonly, nonatomic) long long numberOfCells;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCellCount:(long long)a0;

@end
