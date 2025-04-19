@class NSDictionary;

@interface ContactsEntry : WBSContactsEntry {
    NSDictionary *m_identifierToContactMap;
}

+ (id)formattedPhoneNumber:(id)a0;
+ (id)meContactsEntry;
+ (id)contactsMeCard;
+ (unsigned long long)indexForIdentifier:(id)a0 inValues:(id)a1;
+ (id)labelForIdentifier:(id)a0 inValues:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)_numberOfValuesForIdentifier:(id)a0 andWBSProperty:(id)a1;
- (BOOL)_wbsPropertySupportsMultipleValues:(id)a0;
- (long long)indexOfIdentifier:(id)a0 forWBSProperty:(id)a1;
- (id)initWithContact:(id)a0 identifierToContactMap:(id)a1;
- (id)localizedAddressWithIdentifier:(id)a0 addressComponents:(id)a1;
- (id)valueStringForIdentifier:(id)a0 wbsProperty:(id)a1 wbsComponent:(id)a2 atIndex:(unsigned long long)a3;

@end
