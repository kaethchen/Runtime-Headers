@class NSArray, NSString, NSData;

@interface CNAvatarPickerUserSetupMemojiData : NSObject

@property (retain, nonatomic) NSArray *avatarRecordsDataArray;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSData *avatarRecordsData;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)updateAvatarRecordsData:(id)a0;

@end
