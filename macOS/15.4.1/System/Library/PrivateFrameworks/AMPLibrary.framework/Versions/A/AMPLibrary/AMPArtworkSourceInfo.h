@class NSURL, NSString;

@interface AMPArtworkSourceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dbID;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) unsigned int kind;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long remoteID;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *storeID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudLibraryToken:(id)a0 forDBID:(unsigned long long)a1 forPersistentID:(unsigned long long)a2;
- (id)initWithCloudLibraryURL:(id)a0 andToken:(id)a1 forDBID:(unsigned long long)a2 forPersistentID:(unsigned long long)a3;
- (id)initWithDownloadURL:(id)a0 forDBID:(unsigned long long)a1 forPersistentID:(unsigned long long)a2;
- (id)initWithID:(unsigned long long)a0 forDBID:(unsigned long long)a1;
- (id)initWithImageURL:(id)a0 forDBID:(unsigned long long)a1 forPersistentID:(unsigned long long)a2;
- (id)initWithPurchasesURL:(id)a0 forDBID:(unsigned long long)a1 forPersistentID:(unsigned long long)a2;
- (id)initWithSocialProfileURL:(id)a0 andToken:(id)a1 forDBID:(unsigned long long)a2 forPersistentID:(unsigned long long)a3;

@end
