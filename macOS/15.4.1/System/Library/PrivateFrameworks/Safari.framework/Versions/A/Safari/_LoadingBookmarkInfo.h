@class SafariWebBookmarkList, NSDictionary;

@interface _LoadingBookmarkInfo : NSObject

@property (retain, nonatomic) SafariWebBookmarkList *topBookmark;
@property (copy, nonatomic) NSDictionary *syncData;
@property (readonly, nonatomic) struct SHA256Hash { unsigned char data[32]; } stateHash;
@property (nonatomic) struct SHA256Hash { unsigned char data[32]; } currentBookmarkStateHash;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
