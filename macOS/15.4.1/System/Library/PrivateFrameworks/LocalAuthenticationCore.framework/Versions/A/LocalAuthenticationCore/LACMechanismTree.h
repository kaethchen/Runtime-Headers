@class NSArray;

@interface LACMechanismTree : NSObject

@property (readonly, nonatomic) BOOL isAnd;
@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic) NSArray *children;

+ (id)mechanismTreeFromSerializedTree:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(long long)a0;
- (id)initWithChildren:(id)a0 isAndNode:(BOOL)a1;
- (BOOL)isSatisfiableWithValue:(long long)a0;

@end
