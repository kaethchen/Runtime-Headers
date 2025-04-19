@interface ASKUnbridgedCollection : NSObject

@property (readonly, nonatomic) id collection;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;

@end
