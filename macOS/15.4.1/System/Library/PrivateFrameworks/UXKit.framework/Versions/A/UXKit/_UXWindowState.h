@interface _UXWindowState : NSObject

@property (readonly) unsigned long long styleMask;
@property (readonly) unsigned long long collectionBehavior;

+ (id)windowStateWithStyleMask:(unsigned long long)a0 collectionBehavior:(unsigned long long)a1;

- (void)applyToWindow:(id)a0;

@end
