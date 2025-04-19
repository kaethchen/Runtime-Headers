@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSSnapshotBagBuilder : NSObject

@property (retain) NSDictionary *data;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDate *expirationDate;
@property (retain) AMSProcessInfo *processInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

- (void).cxx_destruct;
- (id)buildWithError:(id *)a0;

@end
