@class NSString, FI_TNotificationCenterObserverGlue, NSObject;
@protocol TTouchBarTagsViewTagProviding;

@interface FI_TTouchBarAddTagsViewController : FI_TTouchBarScrollingStackViewController <TCoalescingNodeObserverProtocol> {
    struct function<void (FI_TTagInfo *, bool)> { struct __value_func<void (FI_TTagInfo *, bool)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _buttonAction;
    struct map<TString, FI_TTouchBarTagButton *, std::less<TString>, std::allocator<std::pair<const TString, FI_TTouchBarTagButton *>>> { struct __tree<std::__value_type<TString, FI_TTouchBarTagButton *>, std::__map_value_compare<TString, std::__value_type<TString, FI_TTouchBarTagButton *>, std::less<TString>>, std::allocator<std::__value_type<TString, FI_TTouchBarTagButton *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TString, FI_TTouchBarTagButton *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TString, std::__value_type<TString, FI_TTouchBarTagButton *>, std::less<TString>>> { unsigned long long __value_; } __pair3_; } __tree_; } _tagNameToButtonMap;
    struct TNSWeakPtr<NSObject<TTouchBarTagsViewTagProviding>> { NSObject<TTouchBarTagsViewTagProviding> *fWeakObject; } _weakTagProvider;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _targetNodesObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tagRegistryObserver;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _filterString;
}

@property (weak, nonatomic) NSObject<TTouchBarTagsViewTagProviding> *tagProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)depressedTagButtonImageForTag:(id)a0;
+ (id)sharedAddTagsViewController;
+ (id)tagButtonImageForTag:(id)a0 shouldDrawOutline:(BOOL)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_init;
- (void)setFilterString:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;
- (void)aboutToTearDown;
- (void)rebuild;
- (void)configureView;
- (const void *)buttonAction;
- (void)setButtonAction:(const void *)a0;
- (void)setTargetNodes:(const void *)a0;
- (void)updateTagStates;
- (id)buttonForTag:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;
- (void)coalescingNodeObserver:(void *)a0 bulkNodesChanged:(const void *)a1;
- (id)tagButtonWithTitle:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0 image:(id)a1;
- (void)updateTag:(id)a0 button:(id)a1 tags:(id)a2;
- (void)updateTagButtons:(id)a0;

@end
