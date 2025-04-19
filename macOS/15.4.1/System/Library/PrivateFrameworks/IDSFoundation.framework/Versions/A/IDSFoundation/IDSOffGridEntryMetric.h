@class NSString, NSDictionary, NSDate, NSNumber;

@interface IDSOffGridEntryMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *service;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL success;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 source:(id)a1 date:(id)a2 success:(BOOL)a3;

@end
