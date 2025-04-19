@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject {
    WBSSQLiteDatabase *_database;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)assignURLString:(id)a0 toTopicTagsWithIDs:(id)a1 error:(id *)a2;
- (BOOL)clearAllTagsWithError:(id *)a0;
- (BOOL)clearTagsFromStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)createTagsForIdentifiers:(id)a0 withTitles:(id)a1 type:(unsigned long long)a2 level:(long long)a3 error:(id *)a4;
- (BOOL)renameTagWithID:(long long)a0 toTitle:(id)a1 error:(id *)a2;

@end
