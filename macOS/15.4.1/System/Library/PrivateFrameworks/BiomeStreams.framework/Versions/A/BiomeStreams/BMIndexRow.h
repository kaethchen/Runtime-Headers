@class NSArray, BMStoreBookmark;

@interface BMIndexRow : NSObject

@property (readonly, nonatomic) NSArray *indexFields;
@property (readonly, nonatomic) BMStoreBookmark *storeBookmark;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIndexFields:(id)a0 storeBookmark:(id)a1;

@end
