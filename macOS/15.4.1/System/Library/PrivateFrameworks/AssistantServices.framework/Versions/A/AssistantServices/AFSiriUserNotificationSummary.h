@class NSString, NSError;

@interface AFSiriUserNotificationSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) long long summaryType;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSummary:(id)a0 summaryType:(long long)a1 error:(id)a2;

@end
