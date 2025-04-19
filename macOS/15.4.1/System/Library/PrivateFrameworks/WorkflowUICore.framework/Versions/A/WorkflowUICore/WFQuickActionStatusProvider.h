@class NSString, _NSQuickActionProvider;
@protocol WFQuickActionSurfaceStatusObserver;

@interface WFQuickActionStatusProvider : NSObject <_NSQuickActionProviderObserver, WFQuickActionSurfaceStatusProvider>

@property (retain, nonatomic) _NSQuickActionProvider *provider;
@property (readonly, nonatomic) NSString *presentationMode;
@property (nonatomic) id<WFQuickActionSurfaceStatusObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)quickActionsDidChange;
- (id)initWithPresentationMode:(id)a0 observer:(id)a1;
- (id)quickActionMatchingReference:(id)a0;
- (void)quickActionsShortcutsDidChange;
- (BOOL)setVisibility:(BOOL)a0 ofReference:(id)a1;
- (BOOL)visibilityOfReference:(id)a0;

@end
