@class NSNumber, NSArray, NSDate;

@interface CKDDeviceCapabilityLastSentCapabilitiesAndUsageEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowID;
@property (retain, nonatomic) NSArray *deviceCapabilityStringSet;
@property (retain, nonatomic) NSDate *capabilitySetSavedDate;
@property (retain, nonatomic) NSDate *usageSavedDate;

- (void).cxx_destruct;

@end
