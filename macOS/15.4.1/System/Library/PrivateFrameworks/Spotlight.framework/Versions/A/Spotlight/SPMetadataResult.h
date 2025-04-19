@class NSString, NSURL, NSOrderedSet, NSMutableDictionary, NSDictionary, NSImage, CSSearchableItem, NSNumber;

@interface SPMetadataResult : SFSearchResult_SpotlightExtras {
    struct __MDItem { } *_metadataItem;
    unsigned __int128 _score;
    NSImage *_appImage;
    NSString *_filePath;
    NSURL *_fileURL;
    NSDictionary *_attributes;
    NSMutableDictionary *_dynamicCache;
}

@property (readonly, nonatomic) NSOrderedSet *alreadyFetchedAttributes;
@property (readonly, nonatomic) CSSearchableItem *csItem;
@property (readonly, nonatomic) NSNumber *groupNumber;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSString *copyrightString;

+ (id)dictionaryForKeys:(id)a0 keySet:(id)a1 query:(struct __MDQuery { } *)a2 group:(unsigned long long)a3 index:(unsigned long long)a4;
+ (id)dictionaryForKeys:(id)a0 keySet:(id)a1 query:(struct __MDQuery { } *)a2 index:(unsigned long long)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (id)identifier;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)bundleID;
- (id)filePath;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)lastUsedDate;
- (void)setScore:(unsigned __int128)a0;
- (id)displayInfo;
- (id)initWithResult:(id)a0;
- (id)groupId;
- (id)documentIdentifier;
- (BOOL)isFile;
- (int)isTopHit;
- (void)markAsUsed;
- (BOOL)isDir;
- (id)fastURL;
- (id)_objectForCacheSlot:(const void **)a0 getterKey:(id)a1;
- (void)_setObject:(id)a0 forCacheSlot:(const void **)a1;
- (BOOL)allowLegacyTopHit;
- (BOOL)allowShowPath;
- (id)blah;
- (id)cachedValueForAttribute:(id)a0;
- (id)fullAttributeSet;
- (id)initWithCSSearchableItem:(id)a0;
- (id)initWithCSSearchableItem:(id)a0 attributeDictionary:(id)a1;
- (id)initWithCSSearchableItem:(id)a0 attributeDictionary:(id)a1 replacing:(id)a2 fetchedAttributes:(id)a3 ranker:(id)a4 queryString:(id)a5;
- (id)initWithFilePath:(id)a0 prefetchAttributes:(id)a1;
- (BOOL)isAppSpellCorrectionCandidate:(id)a0;
- (BOOL)isEqualToMetadataResult:(id)a0;
- (BOOL)isLocalApplicationResult;
- (BOOL)isMetadataResult;
- (BOOL)isValidObjectTypeIfDateAttribute:(id)a0 value:(id)a1;
- (id)otherNames;
- (id)otherTypes;
- (unsigned long long)resultOpenOptions;
- (id)sectionBundleIdentifier;
- (BOOL)shouldNotBeTopHit;
- (id)slowLastUsedDate;
- (void)updateRecentSpotlightEngagementData:(id)a0 date:(id)a1 renderPosition:(id)a2;
- (void)updateRenderOrEngagementCountsForKey:(id)a0 date:(id)a1;

@end
