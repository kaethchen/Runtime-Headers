@class NSString;

@interface SGTHumanDateRange : NSObject {
    unsigned long long _unit;
    long long _deltaFrom;
    long long _deltaTo;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *rangeString;
@property (readonly, nonatomic, getter=isFuture) BOOL future;

- (id)description;
- (void).cxx_destruct;
- (id)dateComponentsRange;
- (id)initWithName:(id)a0 displayName:(id)a1 unit:(unsigned long long)a2 deltaFrom:(long long)a3 deltaTo:(long long)a4;

@end
