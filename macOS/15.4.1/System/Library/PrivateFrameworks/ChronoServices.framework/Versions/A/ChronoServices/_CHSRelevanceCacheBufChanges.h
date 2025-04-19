@interface _CHSRelevanceCacheBufChanges : NSObject {
    unsigned char _changeTypeArchivedObjects;
    unsigned int _replacementArchivedObjects;
    unsigned char _changeTypeGroups;
    unsigned int _replacementGroups;
}

- (void)omitArchivedObjects;
- (void)omitGroups;
- (void)preserveArchivedObjects;
- (void)preserveGroups;
- (void)replaceArchivedObjects:(id)a0;
- (void)replaceGroups:(id)a0;

@end
