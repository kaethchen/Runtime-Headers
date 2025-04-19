@class NSString;

@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMode:(id)a0;
- (id)coreAnalyticsDictionary;
- (id)powerset;

@end
