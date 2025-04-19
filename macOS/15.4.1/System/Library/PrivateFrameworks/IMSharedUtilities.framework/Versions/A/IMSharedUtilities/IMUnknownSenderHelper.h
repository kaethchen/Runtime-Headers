@interface IMUnknownSenderHelper : NSObject

+ (id)mapID:(id)a0 usingKey:(id)a1;
+ (BOOL)accountCountryIsCandidateForInternationalFiltering:(id)a0;
+ (BOOL)accountRegionIsCandidateForInternationalFiltering:(id)a0;
+ (BOOL)receiverIsCandidateForInternationalFiltering:(id)a0;
+ (BOOL)receivingID:(id)a0 isCountryCode:(id)a1;
+ (BOOL)shouldShowInternationalSenderWarningForHandleID:(id)a0;

@end
