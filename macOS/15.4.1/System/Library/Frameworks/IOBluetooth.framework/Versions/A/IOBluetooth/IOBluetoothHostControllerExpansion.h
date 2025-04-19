@class NSString, NSMutableDictionary;

@interface IOBluetoothHostControllerExpansion : NSObject

@property (retain) NSMutableDictionary *outstandingRequests;
@property (retain) NSString *delegateClassString;

- (void)dealloc;
- (void).cxx_destruct;

@end
