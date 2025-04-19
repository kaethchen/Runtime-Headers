@class NSString, NSDictionary;

@interface FCFetchRequest : NSObject

@property (retain) NSString *entity;
@property (retain) NSString *predicate;
@property (retain) NSDictionary *sortDesc1;
@property (retain) NSDictionary *sortDesc2;

+ (id)fetchRequestFromNSFetchRequest:(id)a0;
+ (id)fetchRequestFromPlistData:(id)a0;

- (void)dealloc;
- (id)plistData;
- (id)NSFetchRequest;

@end
