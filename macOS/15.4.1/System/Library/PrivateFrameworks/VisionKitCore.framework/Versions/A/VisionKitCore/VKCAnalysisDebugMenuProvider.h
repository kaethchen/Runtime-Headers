@protocol VKAnalysisDebugInfoProvider;

@interface VKCAnalysisDebugMenuProvider : NSObject

@property (retain, nonatomic) id<VKAnalysisDebugInfoProvider> provider;

- (void).cxx_destruct;
- (void)hideDebugMenu:(id)a0;
- (id)menuFromElements:(id)a0 title:(id)a1;
- (id)menuFromProvider:(id)a0;
- (void)presentDebugMenuProvider:(id)a0 fromView:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
