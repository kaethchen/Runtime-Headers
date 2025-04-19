@class NSArray;

@interface FCPersonalizationTopicsConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *topicsConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)initWithConfig:(id)a0 defaultConfig:(id)a1;
- (id)initWithTopicsConfig:(id)a0;

@end
