@class NSString, SBObject;

@interface _AMiTunes8Item : SBObject

@property (readonly, copy) SBObject *container;
@property (readonly) long long index;
@property (copy) NSString *name;
@property (readonly, copy) NSString *persistentID;

- (void)close;
- (void)open;
- (void)delete;
- (long long)id;
- (BOOL)exists;
- (id)duplicateTo:(id)a0;
- (void)playOnce:(BOOL)a0;
- (void)printPrintDialog:(BOOL)a0 withProperties:(id)a1 kind:(int)a2 theme:(id)a3;
- (void)reveal;

@end
