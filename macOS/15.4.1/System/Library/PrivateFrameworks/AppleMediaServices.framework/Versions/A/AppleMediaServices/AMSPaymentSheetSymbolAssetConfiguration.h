@class NSString;

@interface AMSPaymentSheetSymbolAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *accessibilityText;
@property (readonly, copy) NSString *name;
@property (readonly) long long scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
