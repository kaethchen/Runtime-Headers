@class IMHandle;

@interface IMRichActionCarouselCountChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}

@property (readonly, nonatomic) long long selectedIndex;
@property (readonly, nonatomic) long long totalCount;

+ (id)richCardCountChatItemGUIDPrefix;

- (void).cxx_destruct;
- (id)handle;
- (id)_initWithItem:(id)a0 selectedIndex:(long long)a1 totalCount:(long long)a2;

@end
