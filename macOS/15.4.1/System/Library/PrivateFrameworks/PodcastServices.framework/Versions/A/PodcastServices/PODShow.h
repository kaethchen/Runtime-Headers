@class NSString, NSURL, NSDate;
@protocol PODShowSettingsProtocol;

@interface PODShow : PODContentEntity <PODShowProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *descriptionOfShow;
@property (readonly, nonatomic) unsigned long long storeCollectionId;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) NSURL *feedUrl;
@property (readonly, nonatomic) NSURL *showPageUrl;
@property (readonly, nonatomic) id<PODShowSettingsProtocol> settings;
@property (readonly, nonatomic) long long syncID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUsingPropertiesFrom:(id)a0;

@end
