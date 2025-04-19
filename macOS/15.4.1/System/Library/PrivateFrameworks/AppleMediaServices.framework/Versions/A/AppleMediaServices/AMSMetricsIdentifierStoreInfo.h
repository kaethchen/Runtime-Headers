@class NSString, NSDate;

@interface AMSMetricsIdentifierStoreInfo : NSObject

@property (retain) NSString *account;
@property BOOL crossDeviceSync;
@property double resetInterval;
@property (retain) NSDate *started;
@property (retain) NSString *storeKey;
@property (retain) NSString *storeUUID;
@property BOOL deleted;
@property (retain) NSDate *lastSync;
@property (retain) NSDate *modified;

- (id)description;
- (void).cxx_destruct;

@end
