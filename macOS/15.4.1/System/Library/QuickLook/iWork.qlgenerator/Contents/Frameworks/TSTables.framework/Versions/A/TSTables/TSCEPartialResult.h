@class NSMutableArray, TSCEValue;

@interface TSCEPartialResult : NSObject <NSCopying>

@property (retain, nonatomic) TSCEValue *value;
@property (nonatomic) unsigned int numArgs;
@property (nonatomic) BOOL wasModified;
@property (nonatomic) TSCEPartialResult *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic) unsigned int offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)a0 indent:(int)a1;
- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 childArgs:(const void *)a1;
- (id)initWithValue:(id)a0 numArgs:(unsigned int)a1;
- (id)initWithValue:(id)a0 numArgs:(unsigned int)a1 offset:(unsigned int)a2;

@end
