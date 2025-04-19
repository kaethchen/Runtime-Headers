@class NSString;

@interface AMSFDSResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long action;
@property (copy) NSString *sessionIdentifier;
@property (readonly, copy) NSString *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 action:(unsigned long long)a1;

@end
