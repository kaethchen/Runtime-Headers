@class NSString;
@protocol WFExternalUIPresenterInterface;

@interface WFSiriUIPresenterLocalConnection : NSObject <WFExternalUIPresenterConnection>

@property (readonly, nonatomic) id<WFExternalUIPresenterInterface> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPresenter:(id)a0;
- (id)presenterWithErrorHandler:(id /* block */)a0;

@end
