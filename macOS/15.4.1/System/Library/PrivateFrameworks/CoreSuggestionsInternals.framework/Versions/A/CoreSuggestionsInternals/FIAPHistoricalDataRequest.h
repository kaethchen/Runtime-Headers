@class NSString, NSDate;

@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long requestId;
@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSString *personHandle;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)historicalDataRequestWithPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setRequestId:(unsigned long long)a0;
- (BOOL)isEqualToHistoricalDataRequest:(id)a0;
- (BOOL)_dateRangeIsSubsetOfHistoricalDataRequest:(id)a0;
- (id)initWithPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithRequestId:(unsigned long long)a0 pluginIdentifier:(id)a1 personHandle:(id)a2 startDate:(id)a3 endDate:(id)a4;
- (void)setPluginIdentifier:(id)a0;
- (BOOL)subsetOfHistoricalDataRequest:(id)a0;

@end
