@class NSArray, BMStoreEvent;

@interface ATXPOICategoryEnterAndExitEvents : NSObject

@property (readonly, nonatomic) NSArray *categoryEnterEvents;
@property (readonly, nonatomic) BMStoreEvent *exitEvent;

- (void).cxx_destruct;
- (id)initWithCategoryEvents:(id)a0 exitEvent:(id)a1;
- (id)visitEvent;
- (id)visitEventAllowingMissingExit:(BOOL)a0;

@end
