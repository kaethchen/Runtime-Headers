@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (BOOL)handleEvent:(id)a0;
- (void)resetState;
- (BOOL)shouldDoSpecialHandling;

@end
