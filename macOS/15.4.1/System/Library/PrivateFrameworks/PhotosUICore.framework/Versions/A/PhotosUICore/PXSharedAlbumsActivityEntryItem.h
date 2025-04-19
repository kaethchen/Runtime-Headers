@class NSArray, NSString, NSDate, PXSharedAlbumsActivityEntryAvatarConfiguration;

@interface PXSharedAlbumsActivityEntryItem : NSObject {
    void /* unknown type, empty encoding */ avatarInfos;
    void /* unknown type, empty encoding */ activityEntry;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ displayUseCase;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ contributorDisplayNames;
    void /* unknown type, empty encoding */ albumName;
    void /* unknown type, empty encoding */ albumId;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ relatedCommentUUID;
    void /* unknown type, empty encoding */ assetsForPreviews;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFromMe;
@property (nonatomic, readonly) NSArray *contributorDisplayNames;
@property (nonatomic, readonly) NSString *albumName;
@property (nonatomic, readonly) NSString *albumId;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPlaceholder;
@property (nonatomic, readonly) NSString *relatedCommentUUID;
@property (nonatomic, readonly) NSString *contributorDisplayName;
@property (nonatomic, readonly) PXSharedAlbumsActivityEntryAvatarConfiguration *avatarInfo;

- (id)init;
- (void).cxx_destruct;
- (id)assets;

@end
