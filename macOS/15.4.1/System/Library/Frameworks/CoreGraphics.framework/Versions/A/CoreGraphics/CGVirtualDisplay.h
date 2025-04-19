@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CGVirtualDisplay : NSObject {
    void *_client;
    double _refreshDeadline;
    BOOL _isReference;
    unsigned int _serverRPC_port;
    unsigned int _proxyRPC_port;
    unsigned int _clientHandler_port;
}

@property (readonly, nonatomic) unsigned int vendorID;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, nonatomic) unsigned int serialNumber;
@property (readonly, nonatomic) unsigned int serialNum;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInMillimeters;
@property (readonly, nonatomic) unsigned int maxPixelsWide;
@property (readonly, nonatomic) unsigned int maxPixelsHigh;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } redPrimary;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } greenPrimary;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bluePrimary;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } whitePoint;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ terminationHandler;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) unsigned int hiDPI;
@property (readonly, nonatomic) unsigned int rotation;
@property (readonly, nonatomic) NSArray *modes;

- (void)dealloc;
- (BOOL)applySettings:(id)a0;
- (id)initWithDescriptor:(id)a0;

@end
