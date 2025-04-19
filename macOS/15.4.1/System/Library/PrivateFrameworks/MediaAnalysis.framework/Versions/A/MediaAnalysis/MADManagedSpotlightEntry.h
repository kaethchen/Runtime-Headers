@class NSURL, NSString, NSDate;

@interface MADManagedSpotlightEntry : NSManagedObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic) NSString *sandboxToken;
@property (nonatomic) int mediaType;
@property (nonatomic) int attemptCount;
@property (copy, nonatomic) NSDate *nextAttemptDate;
@property (nonatomic) int status;

+ (unsigned long long)countForMediaType:(unsigned long long)a0 error:(id *)a1;
+ (BOOL)deleteEntryWithUniqueIdentifier:(id)a0 error:(id *)a1;
+ (id)entryWithURL:(id)a0 uniqueIdentifier:(id)a1 bundleIdentifier:(id)a2 typeIdentifier:(id)a3 sandboxToken:(id)a4 mediaType:(unsigned long long)a5 error:(id *)a6;
+ (id)fetchEntriesWithMediaType:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 error:(id *)a2;
+ (id)fetchEntryWithUniqueIdentifier:(id)a0 error:(id *)a1;

- (id)description;

@end
