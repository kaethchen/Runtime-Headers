@class NSURL;

@interface iCloudSettings.ManageStorageAppIconURL : NSObject {
    void /* unknown type, empty encoding */ url1x;
    void /* unknown type, empty encoding */ url2x;
    void /* unknown type, empty encoding */ url3x;
}

@property (nonatomic, readonly) NSURL *url1x;
@property (nonatomic, readonly) NSURL *url2x;
@property (nonatomic, readonly) NSURL *url3x;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (void)urlForScreenScaleWithCompletionHandler:(void (^)(NSURL *))a0;

@end
