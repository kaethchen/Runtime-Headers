@class NSDictionary, NSString;

@interface BMAccessDelegate : NSObject <BMAccessDelegate>

@property (readonly, nonatomic) NSDictionary *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)handlesDirectoryCreationForResource:(id)a0 inContainer:(id)a1;
- (BOOL)handlesDirectoryRemovalForResource:(id)a0 inContainer:(id)a1;
- (id)initWithDelegates:(id)a0;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1 inContainer:(id)a2;
- (BOOL)teardownResource:(id)a0 inContainer:(id)a1;

@end
