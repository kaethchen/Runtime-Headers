@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain) NSDictionary *data;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)createFrozenBag;
- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)a0;

@end
