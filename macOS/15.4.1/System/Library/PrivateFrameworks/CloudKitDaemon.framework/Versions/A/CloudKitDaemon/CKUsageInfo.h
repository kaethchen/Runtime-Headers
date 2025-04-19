@class NSString, NSDate;

@interface CKUsageInfo : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSDate *lastSent;
@property (copy, nonatomic) NSDate *sending;
@property (nonatomic) unsigned long long failureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)completeSendingForDate:(id)a0 withSuccess:(BOOL)a1;
- (id)initWithLastUsed:(id)a0;
- (id)initWithLastUsed:(id)a0 lastSent:(id)a1 sending:(id)a2 failureCount:(unsigned long long)a3;
- (id)initWithUsageInfoEntry:(id)a0;
- (id)startSendingWithResendingRefreshInterval:(double)a0 maxFailureCount:(unsigned long long)a1;

@end
