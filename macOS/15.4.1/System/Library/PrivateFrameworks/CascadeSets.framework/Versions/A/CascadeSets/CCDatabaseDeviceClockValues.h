@class NSNumber, NSMutableIndexSet;

@interface CCDatabaseDeviceClockValues : NSObject

@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) unsigned long long max;
@property (readonly, nonatomic) NSMutableIndexSet *present;
@property (readonly, nonatomic) NSMutableIndexSet *tombstoned;
@property (readonly, nonatomic) NSMutableIndexSet *missing;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDeviceRowId:(id)a0 missingAtomsImplied:(BOOL)a1;
- (void)updateMax:(unsigned long long)a0;

@end
