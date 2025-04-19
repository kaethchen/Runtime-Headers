@class NSString, NSDictionary, NSDate;

@interface HMDCHIPConnectedEcosystemsChangedBulletin : HMFObject

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, getter=isTimeSensitive) BOOL timeSensitive;

+ (id)localizedTitle;
+ (id)localizedBodyForAccessoryName:(id)a0;
+ (id)localizedBodyForAppleEcosystemWithAccessoryName:(id)a0;
+ (id)localizedBodyForEcosystemName:(id)a0 accessoryName:(id)a1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAddedPairing:(id)a0 accessory:(id)a1;
- (id)initWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 dateOfOccurrence:(id)a3 userInfo:(id)a4 isTimeSensitive:(BOOL)a5;

@end
