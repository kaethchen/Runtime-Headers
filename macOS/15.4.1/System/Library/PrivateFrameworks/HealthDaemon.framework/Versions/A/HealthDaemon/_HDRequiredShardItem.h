@class NSString;

@interface _HDRequiredShardItem : NSObject <NSSecureCoding> {
    NSString *_identifier;
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
