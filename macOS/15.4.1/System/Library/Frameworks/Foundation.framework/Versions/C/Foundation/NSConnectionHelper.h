@class NSSet, NSConnection;

@interface NSConnectionHelper : NSObject {
    double reqLim;
    double repLim;
    BOOL remoteUsesKeyedDO;
    NSSet *allowlist;
    BOOL useKeyedDO;
    NSConnection *parent;
}

- (void)dealloc;
- (id)init;
- (void)setAllowList:(id)a0;

@end
