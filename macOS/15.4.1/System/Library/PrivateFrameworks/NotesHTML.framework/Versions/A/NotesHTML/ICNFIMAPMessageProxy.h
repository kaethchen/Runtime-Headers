@class NSString, NSManagedObjectID, NSDate;

@interface ICNFIMAPMessageProxy : ICNFMCManagedObjectProxy <ICNFIMAPMessage, ICNFIMAPPersistedMessage> {
    struct { unsigned int reserved : 27; unsigned char isPartial : 1; unsigned char partsHaveBeenCached : 1; unsigned char hasTemporaryUid : 1; unsigned char isHTML : 1; unsigned char isRich : 1; } _remoteFlags;
}

@property (nonatomic) unsigned int uid;
@property (readonly, copy, nonatomic) NSString *messageID;
@property BOOL isPartial;
@property BOOL partsHaveBeenCached;
@property BOOL hasTemporaryUid;
@property (readonly) struct { unsigned int x0 : 27; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } remoteFlags;
@property (readonly) unsigned long long messageSize;
@property (readonly, copy) NSString *subject;
@property (readonly, copy) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char persistentIDType;
@property (copy) NSString *remoteID;
@property (readonly, nonatomic) long long libraryID;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;

- (id)initWithManagedObject:(id)a0;
- (void)setData:(id)a0 isPartial:(BOOL)a1;
- (void)appendData:(id)a0 part:(id)a1;

@end
