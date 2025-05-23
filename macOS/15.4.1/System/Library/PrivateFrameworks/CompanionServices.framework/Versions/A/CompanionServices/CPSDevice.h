@class NSString;

@interface CPSDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) CPSDevice *currentDevice;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *buildVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initCurrentDevice;

@end
