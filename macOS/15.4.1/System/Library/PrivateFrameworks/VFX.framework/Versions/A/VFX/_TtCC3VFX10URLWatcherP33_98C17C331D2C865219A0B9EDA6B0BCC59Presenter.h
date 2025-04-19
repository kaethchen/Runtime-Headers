@class NSURL, NSOperationQueue;

@interface _TtCC3VFX10URLWatcherP33_98C17C331D2C865219A0B9EDA6B0BCC59Presenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ lastModificationDate;
    void /* unknown type, empty encoding */ shouldReplicate;
    void /* unknown type, empty encoding */ manager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
