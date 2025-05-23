@class TFFeedbackFormPresenter;

@interface TFFeedbackFormViewDataSourceBase : NSObject

@property (retain, nonatomic) TFFeedbackFormPresenter *presenter;
@property (copy, nonatomic) id /* block */ refreshCallback;

- (void).cxx_destruct;
- (void)addScreenshots:(id)a0;
- (unsigned long long)screenshotCount;
- (id)initWithPresenter:(id)a0 refreshCallback:(id /* block */)a1;
- (void)removeScreenshot:(id)a0;
- (void)resetScreenshots:(id)a0;

@end
