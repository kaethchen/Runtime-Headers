@class SCDAAssertionContext, NSUUID, NSString, SCDAAssertionCoordinator, _SCDAAssertionImpl;

@interface _SCDAAssertionProxy : NSObject <SCDARelinquishableAssertion> {
    _SCDAAssertionImpl *_impl;
    SCDAAssertionCoordinator *_coordinator;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) SCDAAssertionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)relinquishWithContext:(id)a0 options:(unsigned long long)a1;
- (void)relinquishWithError:(id)a0 options:(unsigned long long)a1;
- (id)initWithImpl:(id)a0 coordinator:(id)a1;

@end
