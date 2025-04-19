@class NSString;

@interface ABGroupSummaryBuilder : NSObject <ABRecordSummaryBuilding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSummaryOfRecord:(id)a0;

@end
