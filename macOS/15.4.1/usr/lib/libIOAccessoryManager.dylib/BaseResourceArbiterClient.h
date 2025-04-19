@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (void)releaseResourceAccess;
- (BOOL)synchRequestResourceAccess;

@end
