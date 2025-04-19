@class NSString;

@interface _WMReplaceWindowSetWindowActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fromWindowIdentifier;
@property (readonly, copy, nonatomic) NSString *toWindowIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFromWindowIdentifier:(id)a0 toWindowIdentifier:(id)a1;

@end
