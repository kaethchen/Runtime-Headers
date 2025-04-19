@class NSUUID, NSString, NSURL, NSFileSecurity;

@interface SPMSharePoint : NSObject <NSCopying>

@property (readonly) NSUUID *groupID;
@property (readonly) NSString *smbName;
@property (readonly) unsigned long long smbCreateMask;
@property (readonly) unsigned long long smbDirectoryMask;
@property (readonly) BOOL smbGuestAccess;
@property (readonly) BOOL smbShared;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *name;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *accountID;
@property (readonly) BOOL available;
@property (readonly) NSUUID *ownerID;
@property (copy) NSFileSecurity *fileSecurity;

+ (BOOL)isURLShareable:(id)a0;
+ (id)attributesToFetch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 url:(id)a2;
- (id)initWithRecord:(id)a0;

@end
