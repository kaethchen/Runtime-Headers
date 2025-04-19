@interface UNDockConnection : NSObject {
    unsigned int servicePort;
}

- (void)dealloc;
- (id)initWithBootstrap:(unsigned int)a0;
- (id)initWithCurrentUser;
- (BOOL)removeItemsWithPaths:(id)a0;

@end
