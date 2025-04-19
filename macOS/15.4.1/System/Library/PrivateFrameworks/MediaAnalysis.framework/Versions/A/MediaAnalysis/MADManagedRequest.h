@class NSString, NSURL, NSDate, NSData;

@interface MADManagedRequest : NSManagedObject

@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSDate *requestDate;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSData *assetURLExtension;
@property (copy, nonatomic) NSURL *resultDirectoryURL;
@property (copy, nonatomic) NSData *resultDirectoryURLExtension;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *requestType;
@property (retain, nonatomic) NSData *requestData;
@property (nonatomic) short status;
@property (nonatomic) short attempts;
@property (retain, nonatomic) NSDate *previousAttemptDate;
@property (retain, nonatomic) NSDate *nextAttemptDate;

+ (BOOL)removeRequest:(id)a0 error:(id *)a1;
+ (id)entryWithRequestID:(id)a0 bundleIdentifier:(id)a1 sourceIdentifier:(id)a2 assetIdentifier:(id)a3 assetURL:(id)a4 assetURLExtension:(id)a5 resultDirectoryURL:(id)a6 resultDirectoryURLExtension:(id)a7 request:(id)a8 error:(id *)a9;
+ (id)fetchTaskScheduleWithPredicate:(id)a0 error:(id *)a1;

- (id)description;

@end
