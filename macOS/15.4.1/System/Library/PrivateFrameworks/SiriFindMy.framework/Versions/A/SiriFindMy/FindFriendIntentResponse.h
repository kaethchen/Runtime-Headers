@class SpeakableLocation, INFriendLocation;

@interface FindFriendIntentResponse : INIntentResponse

@property (nonatomic, retain) INFriendLocation *friendLocation;
@property (nonatomic, retain) SpeakableLocation *userLocation;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
