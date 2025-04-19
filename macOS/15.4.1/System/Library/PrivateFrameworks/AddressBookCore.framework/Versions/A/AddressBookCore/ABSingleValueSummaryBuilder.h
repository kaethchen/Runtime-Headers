@class NSString;

@interface ABSingleValueSummaryBuilder : NSObject <ABPropertySummaryBuilding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSummaryForValue:(id)a0 property:(id)a1;
- (id)buildSummaryForValue:(id)a0 property:(id)a1 label:(id)a2;

@end
