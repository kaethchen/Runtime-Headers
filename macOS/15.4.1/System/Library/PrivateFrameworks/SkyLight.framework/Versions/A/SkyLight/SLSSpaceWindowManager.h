@class NSMutableDictionary;
@protocol SLSSpaceWindowManagerDelegate;

@interface SLSSpaceWindowManager : NSObject

@property (nonatomic) BOOL valid;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) unsigned int connectionID;
@property (nonatomic) BOOL displaysHaveSeparateSpaces;
@property (weak, nonatomic) id<SLSSpaceWindowManagerDelegate> delegate;
@property (nonatomic) long long nestedCalloutCount;
@property (nonatomic) BOOL beganBatch;
@property (retain, nonatomic) NSMutableDictionary *spaces;
@property (retain, nonatomic) NSMutableDictionary *displayCurrentSpaces;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)synchronize;
- (void)activate;
- (id)batchedDelegate;
- (void)_beginBatch;
- (void)_checkDisplayState:(id)a0;
- (void)_checkSpaceMovedToDisplay:(id)a0 displayUUID:(id)a1;
- (void)_endBatch;
- (void)_fullRebuildSpaceChange:(unsigned long long)a0;
- (void)_fullRebuildSpacesChanged;
- (id)_getDisplayUUIDForSpace:(unsigned long long)a0;
- (void)_performBatchingCallouts:(id /* block */)a0;
- (void)_postActiveDisplayChange;
- (void)_removeSpace:(unsigned long long)a0;
- (void)_space:(unsigned long long)a0 addWindow:(unsigned int)a1;
- (void)_space:(unsigned long long)a0 removeWindow:(unsigned int)a1;
- (void)_spaceChangedDisplay:(unsigned long long)a0;
- (id)_spaceWithID:(unsigned long long)a0 createIfNeeded:(BOOL)a1;
- (void)_updateSpaceWithData:(struct { unsigned long long x0; BOOL x1; } *)a0;
- (void)addWindows:(id)a0 toSpaces:(id)a1 removingFrom:(unsigned int)a2 transaction:(struct _SLSTransaction { } *)a3;
- (id)initWithConnectionID:(unsigned int)a0 delegate:(id)a1 capabilities:(unsigned long long)a2;
- (BOOL)isWindowPresentOnUnmanagedSpaces:(unsigned int)a0;
- (void)moveDraggedWindow:(unsigned int)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 mouseLocation:(struct CGPoint { double x0; double x1; })a2 timestamp:(unsigned long long)a3 transaction:(struct _SLSTransaction { } *)a4;
- (void)rebuildMenuBarOnSpace:(unsigned long long)a0 frontConnection:(unsigned int)a1 transaction:(struct _SLSTransaction { } *)a2;
- (void)requestSpaceSwitchForWindow:(unsigned int)a0 transaction:(struct _SLSTransaction { } *)a1;
- (void)setGlobalWindowVisibilityList:(id)a0 transaction:(struct _SLSTransaction { } *)a1;
- (id)spaceWithID:(unsigned long long)a0;

@end
