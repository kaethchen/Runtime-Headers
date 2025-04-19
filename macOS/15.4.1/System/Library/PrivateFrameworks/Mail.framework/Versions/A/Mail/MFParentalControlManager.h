@class NSString, MCInvocationQueue;

@interface MFParentalControlManager : NSObject <MCActivityTarget>

@property (readonly, nonatomic) MCInvocationQueue *tasks;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_deliverMessage:(id)a0;
- (BOOL)approveRequest:(id)a0;
- (void)_deliverResponseMessage:(id)a0 requestMessage:(id)a1;
- (id)_makeResponseMessageToRequest:(id)a0 approve:(BOOL)a1;
- (BOOL)_respondToRequest:(id)a0 approve:(BOOL)a1;
- (BOOL)rejectRequest:(id)a0;

@end
