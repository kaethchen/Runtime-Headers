@class NSString;

@interface CKAccountObserver : NSObject <CKAccountObserver>

@property (copy) id /* block */ primaryAccountChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accountStore:(id)a0 primaryAccountChanged:(id)a1;

@end
