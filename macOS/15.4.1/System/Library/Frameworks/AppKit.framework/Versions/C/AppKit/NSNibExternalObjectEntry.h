@class NSString;

@interface NSNibExternalObjectEntry : NSObject

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSString *objectDescription;
@property (readonly, weak) id object;

+ (id)entryWithKey:(id)a0 forObject:(id)a1;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1;

@end
