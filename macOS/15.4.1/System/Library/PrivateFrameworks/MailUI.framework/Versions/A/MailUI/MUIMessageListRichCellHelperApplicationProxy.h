@class MUIAddressListFormatter, NSString;
@protocol EFCancelable;

@interface MUIMessageListRichCellHelperApplicationProxy : NSObject <MessageListCellHelperApplicationProxy>

@property (retain, nonatomic) id<EFCancelable> showToCCToken;
@property (nonatomic) BOOL showToCCIndicators;
@property (readonly, nonatomic) MUIAddressListFormatter *addressListFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressListFormatter;
+ (id)sharedApplicationProxy;

@end
