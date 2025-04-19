@class NSString;

@interface ExtensionFoundation.QueryController : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ callbacks;
    void /* unknown type, empty encoding */ _queries;
    void /* unknown type, empty encoding */ _internalExtensions;
    void /* unknown type, empty encoding */ _unelectedCount;
    void /* unknown type, empty encoding */ extensionsLock;
    void /* unknown type, empty encoding */ notificationQueue;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resultDidUpdate:(id)a0;

@end
