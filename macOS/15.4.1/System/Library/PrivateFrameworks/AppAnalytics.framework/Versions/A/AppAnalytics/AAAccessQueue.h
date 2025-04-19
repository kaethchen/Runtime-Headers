@class NSString;

@interface AAAccessQueue : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _qos;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
