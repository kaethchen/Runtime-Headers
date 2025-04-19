@class NSString;

@interface FMSystemVersionNumber : NSObject

@property (nonatomic) long long baseNumber;
@property (copy, nonatomic) NSString *baseLetter;
@property (nonatomic) long long buildNumber;
@property (copy, nonatomic) NSString *suffix;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;

@end
