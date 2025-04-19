@class NSString, EMCachingContactStore, EMCategory, EFFuture;
@protocol ECEmailAddressConvertible;

@interface MUIAvatarImageContext : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) EMCategory *category;
@property (readonly, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly, nonatomic) NSString *businessLogoID;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) EFFuture *brandIndicatorFuture;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 emailAddress:(id)a1 businessLogoID:(id)a2 isAuthenticated:(BOOL)a3 contactStore:(id)a4 brandIndicatorFuture:(id)a5;
- (id)initWithMessageListItem:(id)a0 contactStore:(id)a1 brandIndicatorProvider:(id)a2;

@end
