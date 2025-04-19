@class CNContactFormatter, NSMutableDictionary, NSNotificationCenter, NSCache;

@interface MCDisplayNameManager : NSObject {
    NSCache *_parsedDisplayNameInfos;
    NSMutableDictionary *_queriedDisplayNameInfos;
}

@property (readonly, nonatomic) NSNotificationCenter *displayNameNotificationCenter;
@property (readonly, nonatomic) CNContactFormatter *fullNameFormatter;
@property (readonly, nonatomic) CNContactFormatter *shortNameFormatter;
@property (readonly, nonatomic) NSNotificationCenter *test_notificationCenter;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)formattedEmailAttributedStringForDisplayNameInfoEmailAddressPairs:(id)a0;
+ (id)formattedEmailAttributedStringForAddressList:(id)a0;
+ (id)formattedStringForAddressList:(id)a0;
+ (id)emailAttributedNamesFromDisplayNameInfoEmailAddressPairs:(id)a0;
+ (id)test_displayNameManagerWithCacheDelegate:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)displayNameForAddress:(id)a0;
- (void)addDisplayNameObserver:(id)a0 selector:(SEL)a1;
- (void)removeDisplayNameObserver:(id)a0;
- (id)_cacheItemForFullAddress:(id)a0;
- (id)_createDisplayNameInfoWithAddress:(id)a0;
- (id)_createDisplayNameInfoWithContact:(id)a0;
- (id)_createDisplayNameInfoWithContact:(id)a0 fullName:(id)a1;
- (void)_nameContactsChanged:(id)a0;
- (id)_queriedDisplayNameInfoForAddress:(id)a0;
- (id)initWithCacheDelegate:(id)a0;
- (void)resetCachedDisplayNamesFromContacts;

@end
