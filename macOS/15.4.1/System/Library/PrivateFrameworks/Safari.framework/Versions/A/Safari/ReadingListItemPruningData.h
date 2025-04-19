@class NSURL, NSDate;

@interface ReadingListItemPruningData : NSObject

@property (readonly, nonatomic) NSURL *folderURL;
@property (readonly, nonatomic) NSDate *dateLastViewed;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)initWithFolderURL:(id)a0 dateLastViewed:(id)a1 dateAdded:(id)a2;

@end
