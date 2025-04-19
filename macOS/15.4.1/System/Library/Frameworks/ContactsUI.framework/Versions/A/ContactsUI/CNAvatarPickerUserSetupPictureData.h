@class NSString, NSData;

@interface CNAvatarPickerUserSetupPictureData : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSData *userPictureData;

+ (id)log;
+ (id)userSetupPictureDataForContact:(id)a0;
+ (id)userPictureDataRepresentationForContact:(id)a0;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0;

@end
