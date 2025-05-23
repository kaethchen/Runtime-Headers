@class CNContactStore, NSString, IDSIDQueryController, NSData, NSObject, _PASLock;
@protocol OS_dispatch_queue, NSObject;

@interface _PSContactCache : NSObject <CNChangeHistoryEventVisitor> {
    CNContactStore *_contactStore;
    NSData *_changeHistoryToken;
    id<NSObject> _notificationCenterToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _PASLock *_cachedContactForHandle;
    _PASLock *_cachedFaceTimeableHandleForContactIdentifier;
    IDSIDQueryController *_idsQueryController;
    NSString *_faceTimeServiceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_getCachedContactForHandle:(id)a0;
- (void)_purge;
- (void)_setContact:(id)a0 forHandle:(id)a1;
- (id)contactKeysToFetch;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (id)getContactForHandle:(id)a0 handleType:(long long)a1;
- (id)_getCachedFaceTimeableHandleForContactIdentifier:(id)a0;
- (void)_removeAllHandlesForContactIdentifier:(id)a0;
- (void)_setContact:(id)a0;
- (void)_setLikelyFaceTimeHandle:(id)a0 forContactIdentifier:(id)a1;
- (id)fetchMeContact;
- (long long)getFaceTimeIDSStatusForHandle:(id)a0 contactType:(unsigned long long)a1;
- (id)getFaceTimeableHandleForContact:(id)a0 interactionStore:(id)a1 seedRecipientHandle:(id)a2;
- (id)getMeContact;
- (void)syncChangeHistory;

@end
