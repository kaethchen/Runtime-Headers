@class NSSet, NSMutableSet, NSString;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *typesToObserve;
@property (readonly, nonatomic) NSSet *autoAssetTypes;
@property (weak) id<DDSAssetObservingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginObservingType:(id)a0;
- (void)endObservingTypes:(id)a0;
- (void)notifyObserversAssetsUpdatedForType:(id)a0;
- (void)observeAssetType:(id)a0;

@end
