@class NSString, NSDictionary;

@interface SMPathWithAttributes : NSObject

@property (retain) NSString *pathname;
@property (retain) NSDictionary *attributes;

+ (id)sortedPaths:(id)a0 withAttributes:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPathname:(id)a0 andAttributes:(id)a1;

@end
