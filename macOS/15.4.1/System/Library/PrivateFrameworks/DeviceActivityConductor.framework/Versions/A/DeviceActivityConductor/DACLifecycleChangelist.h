@class NSArray;

@interface DACLifecycleChangelist : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_infos;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;
- (id)_initWithLifecycleInfoArray:(id)a0;
- (id)lifecycleInfoForActivity:(id)a0;

@end
