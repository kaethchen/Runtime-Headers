@class NSManagedObjectID;

@interface _ICNFIMAPManagedObjectIDDetails : ICNFIMAPMessageDetails {
    NSManagedObjectID *_managedObjectID;
}

- (id)description;
- (void).cxx_destruct;
- (id)managedObjectID;
- (void)setManagedObjectID:(id)a0;
- (char)persistentIDType;

@end
