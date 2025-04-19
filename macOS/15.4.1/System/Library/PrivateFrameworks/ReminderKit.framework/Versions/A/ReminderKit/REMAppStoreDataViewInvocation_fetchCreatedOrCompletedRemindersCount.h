@class NSDate;

@interface REMAppStoreDataViewInvocation_fetchCreatedOrCompletedRemindersCount : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fromDate;
@property (readonly, nonatomic) NSDate *toDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFromDate:(id)a0 toDate:(id)a1;

@end
