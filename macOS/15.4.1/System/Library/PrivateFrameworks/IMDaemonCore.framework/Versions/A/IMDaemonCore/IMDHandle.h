@class NSString, NSDictionary;

@interface IMDHandle : NSObject <IMHandle>

@property (retain, nonatomic) NSString *ID;
@property (retain, nonatomic) NSString *unformattedID;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, retain, nonatomic) NSDictionary *handleInfo;
@property (retain, nonatomic) NSString *personCentricID;
@property (copy, nonatomic) NSString *CNContactID;
@property (readonly, nonatomic) BOOL cachedOffGridMode;
@property (readonly, nonatomic) BOOL matchesLoginHandleForAnyAccount;
@property (readonly, nonatomic) NSString *normalizedID;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compareIDs:(id)a0;
- (BOOL)isBusiness;
- (void)cachedOffGridModeAndLastPublisherWithCompletion:(id /* block */)a0;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2 personCentricID:(id)a3;
- (BOOL)isBetterDefinedThan:(id)a0;
- (void)isOffGridModeWithCompletion:(id /* block */)a0;

@end
