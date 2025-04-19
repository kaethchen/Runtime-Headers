@class NSString, NSUUID, NSDate;

@interface MOContextStringFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *textString;
@property (retain, nonatomic) NSUUID *stringIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long score;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long usage;

+ (id)describeFeedbackMode:(unsigned long long)a0;
+ (id)describeUsageFeedback:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)describeFeedbackMode;
- (id)describeUsageFeedback;
- (id)initWithContextStringIdentifier:(id)a0;

@end
