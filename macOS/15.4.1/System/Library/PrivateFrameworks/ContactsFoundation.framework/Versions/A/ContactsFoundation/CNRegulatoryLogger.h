@class NSString;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)readAndTransmittingContactsData;
- (void)deletingContactsData;
- (void)displayingOOPContactPicker;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)logContactPickerAccessEvent;
- (void)logContactsDataAccessEvent;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (void)modifyingContactsData;
- (void)readingContactsData;
- (void)receivingContactsDataFromOOPContactPicker;

@end
