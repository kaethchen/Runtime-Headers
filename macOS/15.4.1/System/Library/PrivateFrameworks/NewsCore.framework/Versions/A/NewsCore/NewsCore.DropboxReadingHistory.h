@class NSSet;

@interface NewsCore.DropboxReadingHistory : NSObject <FCReadingHistoryType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) NSSet *allReadArticleIDs;
@property (nonatomic, readonly) NSSet *allSeenArticleIDs;

- (id)init;
- (void).cxx_destruct;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)a0;

@end
