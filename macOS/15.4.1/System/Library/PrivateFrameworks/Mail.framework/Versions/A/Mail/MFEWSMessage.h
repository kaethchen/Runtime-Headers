@class MFLibraryCalendarEvent, NSString, MCMessageHeaders, NSData, MFEWSAccount, MFMailbox;

@interface MFEWSMessage : MCRemoteMessage

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *changeKey;
@property (retain) NSData *fetchedBodyData;
@property (retain) NSData *headerData;
@property (retain) MCMessageHeaders *headers;
@property (retain) MFLibraryCalendarEvent *associatedCalendarEvent;
@property (nonatomic) long long libraryID;
@property (readonly, nonatomic) MFEWSAccount *account;
@property (readonly, nonatomic) MFMailbox *mailbox;

+ (id)EWSItemIdTypesForItemIdStrings:(id)a0;
+ (id)EWSItemIdTypesForMessages:(id)a0;
+ (id)EWSItemIdStringsForItemIdTypes:(id)a0;
+ (id)EWSFolderClassForMailboxType:(int)a0;
+ (id)EWSItemClassForMessageType:(char)a0;
+ (id)_extendedFieldsForFlags:(long long)a0 importance:(long long *)a1;
+ (id)_mimeContentForData:(id)a0;
+ (id)_newCustomEWSExtendedPropertyWithName:(id)a0 boolValue:(BOOL)a1;
+ (id)_newCustomEWSSetItemWithPropertyName:(id)a0 boolValue:(BOOL)a1;
+ (id)_newEWSAddressForAddress:(id)a0;
+ (id)_newEWSAddressesForAddresses:(id)a0;
+ (id)_newEWSDeleteItemWithDistinguishedPropertySetId:(long long)a0 propertyType:(long long)a1 propertyId:(long long)a2;
+ (id)_newEWSDeleteItemWithPropertyTag:(id)a0 propertyType:(long long)a1;
+ (id)_newEWSExtendedPropertyWithTag:(id)a0 intValue:(int)a1;
+ (id)_newEWSSetItemWithPropertyTag:(id)a0 intValue:(int)a1;
+ (id)dataFromMimeContent:(id)a0;
+ (id)extendedFieldsForEWSCalendarType;
+ (id)extendedFieldsForEWSMeetingMessageType;
+ (id)extendedFieldsForEWSMeetingRequestMessageType;
+ (id)fieldsToMaintainWhenUpdatingMessageType:(char)a0;
+ (long long)flagsForEWSItemType:(id)a0;
+ (char)messageTypeForEWSItemClass:(id)a0;
+ (id)newAddressForEWSAddress:(id)a0;
+ (id)newAddressesForEWSAddresses:(id)a0;
+ (id)newEWSItemFromMessage:(id)a0 data:(id)a1 flags:(long long)a2 sender:(id)a3 recipientsByHeaderKey:(id)a4 categories:(id)a5 existingProperties:(id)a6 useSenderInsteadOfFrom:(BOOL)a7;
+ (id)newMessageWithEWSItemType:(id)a0;
+ (id)propertiesToGetBeforeUpdatingMessageFlags:(id)a0 forMessageType:(char)a1 includesReadReceipts:(BOOL *)a2;
+ (id)updatesForEWSItem:(id)a0 applyingFlagChange:(id)a1;
+ (id)validEWSIdStringsForIdStrings:(id)a0;
+ (id)validEWSItemIdTypesForItemIdTypes:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)dataSource;
- (BOOL)isEditable;
- (void)setDataSource:(id)a0;
- (id)remoteID;
- (id)headersFetchIfNotAvailable:(BOOL)a0;
- (id)initWithItemId:(id)a0 changeKey:(id)a1;
- (void)setHeaderAndBodyFromFullData:(id)a0;

@end
