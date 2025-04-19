@class NSMutableArray;

@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)activateSessionWithError:(id *)a0;
- (BOOL)deactivateSessionWithError:(id *)a0;

@end
