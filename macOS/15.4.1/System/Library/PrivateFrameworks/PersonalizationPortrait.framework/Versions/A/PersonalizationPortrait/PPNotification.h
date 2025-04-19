@class NSString, NSDate;

@interface PPNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNotification:(id)a0;
- (id)initWithBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3 date:(id)a4;
- (id)initWithCurrentDateAndBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3;

@end
