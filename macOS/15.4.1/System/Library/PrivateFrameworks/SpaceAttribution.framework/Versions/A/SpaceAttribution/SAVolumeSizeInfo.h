@class NSString;

@interface SAVolumeSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long used;
@property unsigned long long rawUsed;
@property unsigned long long capacity;
@property unsigned long long purgeableSize;
@property (retain) NSString *mountedOn;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
