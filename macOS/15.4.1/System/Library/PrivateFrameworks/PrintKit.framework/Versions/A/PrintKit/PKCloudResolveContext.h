@class NSEnumerator, PKiCloudPrinter, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PKCloudResolveContext : NSObject {
    PKiCloudPrinter *_icloudPrinter;
    NSEnumerator *_enumerator;
    NSDate *_startTime;
    id /* block */ _completionHandler;
    NSString *_tag;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)_complete:(id)a0;
- (void)_checkFound:(id)a0;
- (void)_driveResolution;
- (id)initWithPKCloudPrinter:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
