@class NSString, NSMutableArray;
@protocol AXVASearchWindowInterface;

@interface SCRVisualsSearchWindow : NSObject <AXVASearchWindowDelegateInterface> {
    NSString *_localSearchText;
    struct _NSRange { unsigned long long location; unsigned long long length; } _localSelectionRange;
}

@property (retain, nonatomic) id<AXVASearchWindowInterface> _searchAgent;
@property (retain, nonatomic) NSMutableArray *_listeners;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectionRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBaseFontSize:(double)a0;
- (void)downArrowKeyDown;
- (void)hideSearchWindow;
- (void)returnKeyDown;
- (void)selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 willChangeTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)text:(id)a0 willChangeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 to:(id)a2;
- (void)upArrowKeyDown;
- (void)addListenerForUpdates:(id)a0;
- (id)initWithSearchAgent:(id)a0;
- (BOOL)removeListenerForUpdates:(id)a0;
- (void)showSearchWindow;

@end
