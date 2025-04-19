@class NSString;

@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *filename;
@property (readonly) NSString *fileExtension;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
