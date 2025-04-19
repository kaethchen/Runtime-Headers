@class CESRSpeechProfileSite, CESRSpeechProfileCategoryGroup, CESRSpeechProfileInstance, NSMutableArray;

@interface CESRSpeechItemRanker : NSObject {
    NSMutableArray *_sets;
    long long _enumeratedItemCount;
}

@property (readonly, nonatomic) CESRSpeechProfileInstance *instance;
@property (readonly, nonatomic) CESRSpeechProfileSite *speechProfileSite;
@property (readonly, nonatomic) CESRSpeechProfileCategoryGroup *categoryGroup;

+ (id)rankersForInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2 sets:(id)a3;
+ (void)refreshRankedItemCachesForInstance:(id)a0 speechProfileSite:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (id)sets;
- (BOOL)hasSets;
- (unsigned int)calculateItemLimit;
- (BOOL)enumerateAllItemsOfSet:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAllRepresentativeItemsOfSet:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (long long)enumeratedItemCount;
- (id)getActivatedCodepathIds;
- (id)getAllCodepathIds;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;
- (BOOL)refreshRankedItemCache:(id *)a0;

@end
