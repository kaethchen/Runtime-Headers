@class NSString, NSMutableDictionary, NSObject;
@protocol PXAnonymousViewController;

@interface PXViewControllerEventTracker : PXUserInterfaceElementEventTracker <PXViewControllerEventTracker, PXChangeObserver>

@property (weak, nonatomic) NSObject<PXAnonymousViewController> *currentViewController;
@property (nonatomic) long long viewSignpost;
@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) BOOL isViewVisible;
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_invalidateIsViewVisible;
- (void)_updateIsViewVisible;
- (id)initWithViewName:(id)a0;
- (void)logViewControllerDidAppear:(id)a0;
- (void)logViewControllerDidDisappear:(id)a0;
- (void)setIsViewVisible:(BOOL)a0;

@end
