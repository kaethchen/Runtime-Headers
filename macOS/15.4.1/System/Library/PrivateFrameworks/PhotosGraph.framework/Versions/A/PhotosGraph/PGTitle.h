@class NSString;

@interface PGTitle : NSObject

@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long category;

+ (id)titleWithString:(id)a0 category:(long long)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
