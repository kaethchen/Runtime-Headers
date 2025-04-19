@class NSString, NSImage, STUsageDetailItem, STAskForTimeRequestResponse;

@interface STRequestItem : NSObject

@property (retain, nonatomic) STAskForTimeRequestResponse *request;
@property (retain, nonatomic) STUsageDetailItem *item;
@property (readonly, copy, nonatomic) NSImage *iconImage;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *descriptionString;

+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingLocalizedDisplayName;

- (void).cxx_destruct;
- (id)initWithAskForTimeRequest:(id)a0;

@end
