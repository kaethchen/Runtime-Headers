@class NSString;

@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives> {
    NSString *_domain;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithDomain:(id)a0;

@end
