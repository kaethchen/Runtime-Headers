@class MFEWSVisibleBodyFetchTask, NSString, MFEWSAccountTaskManager;

@interface MFEWSBodyFetchContext : NSObject <MCBodyFetchContext> {
    MFEWSVisibleBodyFetchTask *_bodyFetchTask;
}

@property (readonly, nonatomic) MFEWSAccountTaskManager *manager;
@property (readonly, nonatomic) MFEWSVisibleBodyFetchTask *bodyFetchTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cacheBodiesForMessages:(id)a0;
- (id)initWithTaskManager:(id)a0;
- (void)setBodyFetchTask:(id)a0;

@end
