@interface AMDelayedUpdaterInfo : NSObject

@property (readonly) id updater;
@property (readonly) SEL selector;
@property (readonly) id argument;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
