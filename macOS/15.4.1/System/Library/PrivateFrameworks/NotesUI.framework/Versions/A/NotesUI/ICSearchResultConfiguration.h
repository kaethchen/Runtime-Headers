@class NSString, ICSortableSearchableItem, NSManagedObjectID;

@interface ICSearchResultConfiguration : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *searchString;
@property (readonly, nonatomic) unsigned long long searchStringLength;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;
@property (readonly, nonatomic) BOOL isTopHit;
@property (readonly, nonatomic) NSManagedObjectID *foundAttachmentObjectID;
@property (readonly, nonatomic) ICSortableSearchableItem *sortableSearchableItem;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 searchSuggestionType:(unsigned long long)a1 isTopHit:(BOOL)a2 foundAttachmentObjectID:(id)a3 sortableSearchableItem:(id)a4;

@end
