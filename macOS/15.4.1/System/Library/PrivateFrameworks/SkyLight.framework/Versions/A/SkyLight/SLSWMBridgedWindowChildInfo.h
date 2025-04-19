@class SLSWMBridgedWindow;

@interface SLSWMBridgedWindowChildInfo : NSObject

@property (retain) SLSWMBridgedWindow *window;
@property int op;

- (void).cxx_destruct;

@end
