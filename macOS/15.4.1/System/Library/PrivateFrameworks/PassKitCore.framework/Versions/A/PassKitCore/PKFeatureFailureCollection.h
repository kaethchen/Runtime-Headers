@class NSMutableDictionary;

@interface PKFeatureFailureCollection : NSObject <NSSecureCoding> {
    NSMutableDictionary *_failuresByFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)errorForFeature:(unsigned long long)a0;

@end
