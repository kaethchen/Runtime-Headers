@class STKStickerSearchQuery, NSError, _STKSearchResult;

@interface _STKSearchObjCFacade : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ stickerSearchDataSource;
    void /* unknown type, empty encoding */ emojiSearchDataSource;
}

@property (nonatomic) void /* unknown type, empty encoding */ enableEmojiSearch;
@property (nonatomic) void /* unknown type, empty encoding */ enableStickerSearch;

- (id)init;
- (void).cxx_destruct;
- (void)search:(STKStickerSearchQuery *)a0 completionHandler:(void (^)(_STKSearchResult *, NSError *))a1;

@end
