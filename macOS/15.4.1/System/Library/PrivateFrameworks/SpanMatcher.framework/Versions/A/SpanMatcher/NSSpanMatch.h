@class NSString;

@interface NSSpanMatch : NSObject

@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long distance;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 distance:(long long)a1;

@end
