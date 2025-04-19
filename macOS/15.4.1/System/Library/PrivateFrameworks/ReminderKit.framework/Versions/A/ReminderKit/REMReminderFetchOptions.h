@interface REMReminderFetchOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) REMReminderFetchOptions *defaultFetchOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL includeConcealed;
@property (nonatomic) BOOL includeDueDateDeltaAlerts;

+ (id)fetchOptionsIncludingConcealed;
+ (id)fetchOptionsIncludingDueDateDeltaAlerts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyFromFetchOptions:(id)a0;
- (id)fetchOptionsIncludingConcealed;
- (id)fetchOptionsIncludingDueDateDeltaAlerts;
- (id)initWithIncludeConcealed:(BOOL)a0 includeDueDateDeltaAlerts:(BOOL)a1;

@end
