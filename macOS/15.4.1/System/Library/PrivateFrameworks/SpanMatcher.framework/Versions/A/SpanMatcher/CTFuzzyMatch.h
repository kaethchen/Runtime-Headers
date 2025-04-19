@class NSArray, NSString;

@interface CTFuzzyMatch : NSObject {
    long long _CTdistance;
    NSArray *_CTdata;
    NSString *_CTvalue;
}

@property (readonly, nonatomic) long long distance;
@property (readonly, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) NSString *value;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0 withDistance:(long long)a1 andData:(id)a2;

@end
