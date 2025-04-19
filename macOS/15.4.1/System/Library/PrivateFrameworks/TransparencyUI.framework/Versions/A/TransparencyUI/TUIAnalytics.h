@class NSDate;

@interface TUIAnalytics : NSObject

@property (retain, nonatomic) NSDate *timeConversationUIDisplayed;

- (id)init;
- (void).cxx_destruct;
- (void)ktConversationNoMatch:(BOOL)a0;
- (void)ktInteraction:(id)a0;
- (void)ktMarkAsVerified:(BOOL)a0 sasCodeGenerated:(BOOL)a1 publicKeyVisible:(BOOL)a2;

@end
