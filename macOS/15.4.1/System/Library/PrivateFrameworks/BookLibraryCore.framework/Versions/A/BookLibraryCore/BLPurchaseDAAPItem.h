@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSNumber;

@interface BLPurchaseDAAPItem : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char itemHasVideo : 1; } _itemFlags;
    BOOL _isFrozen;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *mutableInfo;
@property (retain, nonatomic) NSDictionary *frozenInfo;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSString *songalbum;
@property (retain, nonatomic) NSString *songartist;
@property (retain, nonatomic) NSString *songalbumartist;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) unsigned char downloadStatus;
@property (nonatomic) unsigned long long songalbumid;
@property (nonatomic) unsigned int containerItemID;
@property (retain, nonatomic) NSNumber *hasVideo;
@property (readonly, nonatomic) int mediaKind;
@property (readonly, nonatomic) NSDate *expectedDate;

+ (id)item;
+ (id)itemWithItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)freeze;
- (void)thaw;
- (void)updateItemWithDictionary:(id)a0;
- (void)updateItemWithItem:(id)a0;

@end
