@class NSString, NSDictionary;

@interface WBSOfflineSearchRemoteDisablementSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary *_disablementDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)snapshotData;
- (BOOL)_isCurrentSafariVersionDisabled:(id)a0;
- (BOOL)areOfflineSearchSuggestionsDisabledRemotelyForSearchProvider:(id)a0;
- (id)initWithSnapshotData:(id)a0 error:(id *)a1;

@end
