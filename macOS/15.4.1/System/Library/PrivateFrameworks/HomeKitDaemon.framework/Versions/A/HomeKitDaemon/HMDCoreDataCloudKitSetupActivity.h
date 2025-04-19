@class NSString, NSUUID, NSDate, NSError;

@interface HMDCoreDataCloudKitSetupActivity : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUUID *parentActivityIdentifier;
@property (readonly, nonatomic) NSString *phase;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL succeeded;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
