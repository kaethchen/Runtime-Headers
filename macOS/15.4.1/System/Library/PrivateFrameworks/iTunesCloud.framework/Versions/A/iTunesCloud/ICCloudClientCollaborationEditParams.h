@class NSString, NSDate;

@interface ICCloudClientCollaborationEditParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reactionString;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *itemUUID;
@property (readonly, copy, nonatomic) NSString *itemPositionUUID;
@property (readonly, copy, nonatomic) NSString *referencePositionUUID;
@property (readonly, nonatomic) long long positionType;
@property (readonly, nonatomic) unsigned long long itemAdamID;
@property (readonly, copy, nonatomic) NSDate *timestamp;

+ (id)newIdentifierString;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)a0 itemUUID:(id)a1 itemPositionUUID:(id)a2 atPosition:(long long)a3;
+ (id)descriptionForPositionType:(long long)a0;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)a0 itemUUID:(id)a1 itemPositionUUID:(id)a2 afterReferencePositionUUD:(id)a3;
+ (id)paramsForMovingTrackWithItemUUID:(id)a0 withNewItemPositionUUID:(id)a1 afterReferencePositionUUD:(id)a2;
+ (id)paramsForMovingTrackWithItemUUID:(id)a0 withNewItemPositionUUID:(id)a1 toPosition:(long long)a2;
+ (id)paramsForRemovingTrackWithItemUUID:(id)a0;
+ (id)paramsForSettingReaction:(id)a0 onTrackWithItemUUID:(id)a1;
+ (id)paramsForUnsettingReaction:(id)a0 onTrackWithItemUUID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
