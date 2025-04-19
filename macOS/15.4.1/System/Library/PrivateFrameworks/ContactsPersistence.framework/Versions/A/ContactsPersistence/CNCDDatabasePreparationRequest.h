@class NSURL;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDDatabasePreparationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> registrar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 registrar:(id)a2;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;
- (id)preparationRequestUsingRegistrar:(id)a0;

@end
