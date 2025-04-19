@class NSObject;

@interface FSItemTriple : NSObject

@property (readonly, retain) NSObject *first;
@property (readonly, retain) NSObject *second;
@property (readonly, retain) NSObject *third;

+ (id)tripleWith:(id)a0 second:(id)a1 third:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 second:(id)a1 third:(id)a2;

@end
