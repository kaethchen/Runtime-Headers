@class NSString, NSDate;
@protocol SFSafariPasswordCredential;

@interface SFSafariCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<SFSafariPasswordCredential> externalCredential;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (nonatomic) BOOL isDefaultForAnAssociatedDomain;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *site;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) BOOL isExternalPasskey;
@property (readonly, nonatomic) NSString *oneTimeCode;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalCredential:(id)a0;
- (id)initWithOneTimeCode:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4 groupName:(id)a5;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 groupName:(id)a4;

@end
