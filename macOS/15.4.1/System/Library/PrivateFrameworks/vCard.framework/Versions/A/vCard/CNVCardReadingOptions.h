@class NSArray;

@interface CNVCardReadingOptions : NSObject

@property (nonatomic) unsigned long long contactLimit;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic) BOOL useConcurrentParsing;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
