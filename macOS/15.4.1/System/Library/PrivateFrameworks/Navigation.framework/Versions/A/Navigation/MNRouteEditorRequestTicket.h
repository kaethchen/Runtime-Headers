@interface MNRouteEditorRequestTicket : NSObject

@property (readonly, nonatomic) BOOL isCancelled;

- (void)cancel;

@end
