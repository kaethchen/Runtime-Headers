@interface CPDelayedUpdaterInfo : NSObject

@property (readonly, retain) id updater;
@property (readonly) SEL selector;
@property (readonly, retain) id argument;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
