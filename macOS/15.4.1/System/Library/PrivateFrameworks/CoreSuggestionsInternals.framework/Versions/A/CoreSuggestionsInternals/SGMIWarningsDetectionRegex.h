@class NSNumber;

@interface SGMIWarningsDetectionRegex : NSRegularExpression

@property (readonly, nonatomic) NSNumber *privateGroupsCount;

+ (id)hashedValueOfString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)matchForString:(id)a0;
- (id)initWithPattern:(id)a0;
- (id)initWithPattern:(id)a0 compiledRegexCache:(id)a1;
- (id)matchForString:(id)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)matchesForString:(id)a0;
- (id)matchesForString:(id)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 onlyFirstMatch:(BOOL)a2;

@end
