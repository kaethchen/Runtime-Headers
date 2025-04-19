@interface SPClientSession : NSObject

@property (nonatomic) BOOL infinitePatience;

- (void)activate;
- (void)deactivate;
- (void)preheat;
- (id)queryTaskWithContext:(id)a0;

@end
