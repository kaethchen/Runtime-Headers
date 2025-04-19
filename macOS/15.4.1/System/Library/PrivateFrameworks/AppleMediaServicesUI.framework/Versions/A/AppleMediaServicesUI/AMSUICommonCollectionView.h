@class AMSUICommonCollectionViewHandler;
@protocol AMSUICommonCollectionViewDelegate, NSCollectionViewDelegate;

@interface AMSUICommonCollectionView : NSCollectionView

@property (readonly) AMSUICommonCollectionViewHandler *handler;
@property (weak) id<AMSUICommonCollectionViewDelegate> commonDelegate;
@property (weak) id<NSCollectionViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (id)cellForItemAtIndexPath:(id)a0;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;

@end
