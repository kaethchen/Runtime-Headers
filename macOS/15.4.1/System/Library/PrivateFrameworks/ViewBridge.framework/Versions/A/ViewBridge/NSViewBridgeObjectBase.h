@class NSObject;
@protocol NSSecureCoding;

@interface NSViewBridgeObjectBase : NSObject

@property (retain) NSObject<NSSecureCoding> *object;

- (void)dealloc;

@end
