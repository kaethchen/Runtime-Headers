@class NSArray;

@interface DEMatchCriteria : NSObject

@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) NSArray *suffixes;

+ (id)matchCriteriaFromPb:(const void *)a0;
+ (void)matchCriteriaToPb:(id)a0 matchCriteriaPb:(void *)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)all:(id)a0;
- (BOOL)any:(id)a0;
- (id)initWithPrefixes:(id)a0 suffixes:(id)a1;

@end
