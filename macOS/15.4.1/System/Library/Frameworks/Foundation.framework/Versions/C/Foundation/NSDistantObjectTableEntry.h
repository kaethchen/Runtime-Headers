@class NSConnection, NSDistantObject;

@interface NSDistantObjectTableEntry : NSObject {
    NSConnection *_conn;
    NSDistantObject *_proxy;
    id _localObject;
    unsigned int _wireID;
}

- (void)dealloc;
- (id)description;

@end
