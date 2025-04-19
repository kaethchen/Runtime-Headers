@class GKAchievementInternal, NSImage, NSString, NSDictionary, NSNumber;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSImage *image;
@property (retain) GKAchievementInternal *internal;
@property (readonly, copy) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *groupIdentifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *achievedDescription;
@property (readonly, copy) NSString *unachievedDescription;
@property (readonly) long long maximumPoints;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;
@property (readonly, copy) NSNumber *rarityPercent;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) NSDictionary *activityProperties;
@property (readonly, nonatomic) unsigned long long releaseState;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)a0;
+ (id)_achievementDescriptionFromGame:(id)a0 propertyListDictionary:(id)a1;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)a0;
+ (void)loadAchievementDescriptionsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithInternalRepresentation:(id)a0;
- (id)game;
- (id)imageNameForIcon;

@end
