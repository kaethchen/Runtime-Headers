@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL prevSelected;
@property (nonatomic) unsigned int value;
@property (nonatomic) unsigned int kind;
@property (copy, nonatomic) NSString *name;

+ (id)withValue:(unsigned int)a0;
+ (id)withValue:(unsigned int)a0 andName:(id)a1;
+ (id)withValue:(unsigned int)a0 andName:(id)a1 selected:(BOOL)a2;
+ (id)withValue:(unsigned int)a0 name:(id)a1 andKind:(unsigned int)a2;
+ (id)withValue:(unsigned int)a0 name:(id)a1 andKind:(unsigned int)a2 selected:(BOOL)a3;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(unsigned int)a0 name:(id)a1 andKind:(unsigned int)a2 selected:(BOOL)a3;

@end
