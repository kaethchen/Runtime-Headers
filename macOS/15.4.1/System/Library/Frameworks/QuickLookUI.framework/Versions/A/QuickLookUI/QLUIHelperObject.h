@interface QLUIHelperObject : NSObject {
    unsigned int _port;
}

@property unsigned int port;
@property unsigned int serverPort;

+ (id)objectForPort:(unsigned int)a0;
+ (id)mapTable;

- (void)invalidate;

@end
