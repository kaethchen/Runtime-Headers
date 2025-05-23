@interface MAAutoAssetNotifications : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL newerVersionDiscovered;
@property (nonatomic) BOOL checkForNewerFailure;
@property (nonatomic) BOOL contentAvailableForUse;
@property (nonatomic) BOOL contentVersionRevoked;
@property (nonatomic) BOOL lockUsageCheck;
@property (nonatomic) BOOL filesystemSpaceCritical;
@property (nonatomic) BOOL assetPurged;
@property (nonatomic) BOOL downloadPending;
@property (nonatomic) BOOL downloadProgress;
@property (nonatomic) BOOL downloadAbandoned;

+ (id)notifyRegistrationName:(id)a0 forAssetType:(id)a1;
+ (id)notifyRegistrationName:(id)a0 forAssetType:(id)a1 forAssetSpecifier:(id)a2;

- (id)copy;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;

@end
