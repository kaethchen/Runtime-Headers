@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface OSSystemExtensionOrphanCleanerResult : NSObject

@property (retain) NSMutableArray *s;
@property (retain) NSMutableDictionary *f;
@property (readonly) NSArray *successfullyCleanedUp;
@property (readonly) NSDictionary *failedToCleanup;

- (id)init;
- (void).cxx_destruct;

@end
