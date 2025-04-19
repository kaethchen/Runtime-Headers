@class NSString, SCRChooserItemResult;

@interface _SCRRemoteGuideItemInfo : NSObject

@property (copy, nonatomic) NSString *remoteGuideItemTitle;
@property (retain, nonatomic) SCRChooserItemResult *remoteGuideItemResult;

+ (id)remoteGuideItemInfoWithTitle:(id)a0 result:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 result:(id)a1;

@end
