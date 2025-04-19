@class NSString, NSNumber;

@interface ATXCoreAnalyticsModeDNDDimensions : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSNumber *isDND;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)initWithMode:(id)a0 isDND:(BOOL)a1;
- (id)initWithMode:(id)a0 nullableIsDND:(id)a1;
- (id)powerset;

@end
