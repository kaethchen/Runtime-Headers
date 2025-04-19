@class NSURL, NSOperationQueue;

@interface VFX.ShaderLibrary : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ libraryURL;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ watchingFolderQueue;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ reloadedNotificationBlock;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
