@class NSString;

@interface AMSCarrierMSISDNProvider : NSObject <AMSCarrierMSISDNProviding>

@property (readonly) NSString *msisdn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
