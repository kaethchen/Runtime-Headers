@class NSArray, NSString;

@interface EWSActiveDirectoryLookup : NSObject

@property (copy, nonatomic) NSArray *discoveredRecords;
@property (readonly, copy, nonatomic) NSString *emailAddress;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0;
- (BOOL)lookup;

@end
