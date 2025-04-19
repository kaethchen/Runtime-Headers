@class RVPopoverPresenter, LUPresenter;
@protocol RVPresenterViewControllerProvider, NSObject;

@interface RVPresenter : NSObject {
    id<NSObject> _observer;
    LUPresenter *_lookupPresenter;
    RVPopoverPresenter *_popoverPresenter;
}

@property (weak, nonatomic) id<RVPresenterViewControllerProvider> viewControllerProvider;

+ (id)sharedPresenter;

- (void).cxx_destruct;
- (id)animationControllerForItem:(id)a0 documentContext:(id)a1 presentingContext:(id)a2 options:(id)a3;
- (id)menuItemsForItem:(id)a0 documentContext:(id)a1 presentingContext:(id)a2 options:(id)a3;
- (BOOL)revealItem:(id)a0 documentContext:(id)a1 presentingContext:(id)a2 options:(id)a3;
- (void)contentMoved;
- (BOOL)tryCloseAllPopoverForDDContext:(id)a0;
- (void)contentChanged;
- (BOOL)ddActionAvailableForUrl:(id)a0 ddResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 ddContext:(id)a2;
- (id)ddActionContextFromDocumentContext:(id)a0 presentingContext:(id)a1 item:(id)a2 ddResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a3;
- (BOOL)lookupDataForItem:(id)a0 text:(id *)a1 updatedOptions:(id *)a2 options:(id)a3;
- (id)lookupMenuItemTitleForText:(id)a0;
- (id)menuItemExtractForText:(id)a0;
- (id)revealOptionsFromClientOptions:(id)a0 withItem:(id)a1 triggerType:(unsigned long long)a2;
- (id)taggedItems:(id)a0;
- (id)translateMenuItemTitleForItem:(id)a0;

@end
