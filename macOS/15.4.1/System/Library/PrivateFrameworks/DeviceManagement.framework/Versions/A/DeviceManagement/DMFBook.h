@class NSString, NSNumber;

@interface DMFBook : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreID;
@property (readonly, copy, nonatomic) NSString *author;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentID:(id)a0 iTunesStoreID:(id)a1 author:(id)a2 title:(id)a3 version:(id)a4 type:(unsigned long long)a5 state:(unsigned long long)a6;

@end
