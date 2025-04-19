@class NSString;

@interface AMSSetItem : NSObject

@property (readonly) id object;
@property (readonly) NSString *hashKey;

+ (id)setItemWithObject:(id)a0 hashKey:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 hashKey:(id)a1;

@end
