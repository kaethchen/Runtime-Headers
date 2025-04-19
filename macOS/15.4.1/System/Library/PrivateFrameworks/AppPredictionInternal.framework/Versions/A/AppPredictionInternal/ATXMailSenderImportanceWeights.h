@class NSDictionary;

@interface ATXMailSenderImportanceWeights : NSObject {
    NSDictionary *_mailSenderImportanceWeights;
}

- (id)init;
- (void).cxx_destruct;
- (double)isVIP;
- (double)isEmergencyContact;
- (double)isFromMailingList;
- (double)isContactChatPinnedInMessage;
- (double)isFavoriteContact;
- (double)isFrequentlyContacted;
- (double)isiCloudFamilyMember;
- (double)mailContactHasBeencontactedToday;
- (double)speedOfResponseToMailContact;

@end
