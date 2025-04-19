@class NSString, NSDate;

@interface KTIDStaticKeyStoreHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *handle;
@property BOOL valid;
@property (copy) NSDate *validationDate;
@property int errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
