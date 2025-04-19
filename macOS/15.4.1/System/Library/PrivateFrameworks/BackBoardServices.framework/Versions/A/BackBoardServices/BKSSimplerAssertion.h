@class NSString;

@interface BKSSimplerAssertion : NSObject <BSInvalidatable> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
    NSString *_identifier;
    id /* block */ _invalidationBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)assertionWithDescription:(id)a0 invalidationBlock:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;

@end
