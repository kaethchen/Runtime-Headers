@class CHSWidgetMetrics, NSFileHandle;

@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) NSFileHandle *fileHandle;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetrics:(id)a0 family:(long long)a1 fileHandle:(id)a2;

@end
