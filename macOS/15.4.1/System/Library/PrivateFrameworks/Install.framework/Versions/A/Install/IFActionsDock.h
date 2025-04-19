@class NSArray;

@interface IFActionsDock : NSObject {
    NSArray *_dockItems;
    unsigned int _port;
    int _tid;
    BOOL _connected;
}

- (void)dealloc;
- (id)init;
- (void)close;
- (BOOL)connect;
- (BOOL)removeDockItem:(id)a0;
- (BOOL)addDockItem:(id)a0 atIndex:(id)a1;
- (id)dockPlistPathForUser:(id)a0;
- (id)getDockItems;
- (BOOL)legacyAddDockItem:(id)a0 atIndex:(id)a1;
- (id)legacyGetDockItems;
- (BOOL)legacyMoveDockItem:(unsigned int)a0 toIndex:(unsigned int)a1;
- (BOOL)legacyRemoveDockItem:(unsigned int)a0;
- (BOOL)moveDockItem:(id)a0 toIndex:(id)a1;

@end
