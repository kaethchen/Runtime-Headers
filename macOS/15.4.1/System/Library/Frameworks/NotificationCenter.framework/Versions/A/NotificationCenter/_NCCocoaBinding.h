@class NSString;

@interface _NCCocoaBinding : NSObject {
    BOOL _observesSelf;
}

@property (weak, nonatomic) id object;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 KeyPath:(id)a1 andBlock:(id /* block */)a2;

@end
