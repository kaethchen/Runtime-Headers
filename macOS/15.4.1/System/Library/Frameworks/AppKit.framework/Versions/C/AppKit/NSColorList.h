@class NSArray, NSString, NSMutableArray;

@interface NSColorList : NSObject <NSSecureCoding> {
    NSMutableArray *_keyArray;
    NSMutableArray *_colorArray;
    struct __CFDictionary { } *_keyToIndexTable;
    NSString *_name;
    NSString *_printerType;
    NSString *_fileName;
    struct _colorListFlags { unsigned char colorsLoaded : 1; unsigned char editable : 1; unsigned char hasDeviceSpecificLists : 1; unsigned char dirty : 1; unsigned char hasFrozen : 1; unsigned char notificationsDisabled : 1; unsigned char hasAttemptedLoadingBundleForDirectory : 1; unsigned char isProfileBased : 1; unsigned int  : 24; unsigned int  : 32; } _flags;
    id _clAuxiliaryStorage;
}

@property (class, readonly, copy) NSArray *availableColorLists;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, getter=isEditable) BOOL editable;

+ (void)initialize;
+ (id)colorListNamed:(id)a0;
+ (id)_colorListNamed:(id)a0 forDeviceType:(id)a1;
+ (void)_colorSyncProfileRepositoryChanged:(id)a0;
+ (id)_findColorListNamed:(id)a0 forDeviceType:(id)a1;
+ (void)_loadSystemScreenColorList;
+ (id)_newWithName:(id)a0 fromPath:(id)a1 forDeviceType:(id)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (BOOL)_isProfileBased;
- (BOOL)_parsePantoneLikeList:(id)a0 fileName:(id)a1;
- (BOOL)_writeToURL:(id)a0 keyedArchive:(BOOL)a1 error:(id *)a2;
- (id)_localizedNameForColorWithName:(id)a0;
- (void)_changed:(id)a0;
- (id)_colorAtIndex:(unsigned long long)a0;
- (unsigned long long)_count;
- (void)_decodeWithoutNameWithCoder:(id)a0 newStyle:(BOOL)a1;
- (void)_encodeWithoutNameWithCoder:(id)a0 newStyle:(BOOL)a1;
- (unsigned long long)_indexOfKey:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })_infoForPage:(unsigned long long)a0;
- (id)_initWithName:(id)a0 fromColorSyncProfileRef:(id)a1;
- (id)_initWithName:(id)a0 fromPath:(id)a1 forDeviceType:(id)a2 lazy:(BOOL)a3;
- (void)_invalidateKeyToIndexTable;
- (BOOL)_isPaged;
- (BOOL)_isUpdated;
- (BOOL)_loadColors;
- (id)_localizedColorListCopyrightString;
- (id)_localizedColorListName;
- (id)_localizedKeyFromBundleStringFileForKey:(id)a0;
- (id)_nameAtIndex:(unsigned long long)a0;
- (unsigned long long)_pageCount;
- (unsigned long long)_pageForIndex:(unsigned long long)a0;
- (BOOL)_parseArchivedList:(id)a0;
- (BOOL)_parseKeyedArchivedList:(id)a0;
- (BOOL)_parseReleaseTwoList:(id)a0;
- (void)_rawAddColor:(id)a0 key:(id)a1;
- (BOOL)_rename:(id)a0 as:(id)a1;
- (void)_setUpdated:(BOOL)a0;
- (id)colorWithKey:(id)a0;
- (id)initWithName:(id)a0 fromFile:(id)a1;
- (void)insertColor:(id)a0 key:(id)a1 atIndex:(unsigned long long)a2;
- (void)removeColorWithKey:(id)a0;
- (void)removeFile;
- (void)setColor:(id)a0 forKey:(id)a1;
- (BOOL)writeToFile:(id)a0;

@end
