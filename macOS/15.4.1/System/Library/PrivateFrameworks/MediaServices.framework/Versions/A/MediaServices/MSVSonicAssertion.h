@class NSString;

@interface MSVSonicAssertion : NSObject {
    BOOL _needsInvalidation;
}

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (BOOL)hasEntitlement;
+ (id)sharedObserver;
+ (BOOL)shouldAlsoUseOSTransaction;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)handleInvalidation:(id)a0;

@end
