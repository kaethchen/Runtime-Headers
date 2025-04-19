@class NSMutableDictionary;
@protocol PXReusableObjectPoolDelegate;

@interface PXReusableObjectPool : NSObject {
    struct { BOOL respondsToDidCreateReusableObject; BOOL respondsToObjectBecameReusable; BOOL respondsToObjectPreparedForReuse; } _delegateFlags;
}

@property (readonly, nonatomic) NSMutableDictionary *objectCreationBlocksByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *maximumPoolSizeByReuseIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *reusableObjectsByReuseIdentifier;
@property (weak, nonatomic) id<PXReusableObjectPoolDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)checkInReusableObject:(id)a0;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)a0;
- (void)registerReusableObjectForReuseIdentifier:(long long)a0 creationHandler:(id /* block */)a1;
- (void)registerReusableObjectForReuseIdentifier:(long long)a0 maximumPoolSize:(long long)a1 creationHandler:(id /* block */)a2;
- (void)removeAllReusableObjectsWithReuseIdentifier:(long long)a0;

@end
