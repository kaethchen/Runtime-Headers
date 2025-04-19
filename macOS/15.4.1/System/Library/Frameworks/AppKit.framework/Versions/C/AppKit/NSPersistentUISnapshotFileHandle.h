@interface NSPersistentUISnapshotFileHandle : NSObject {
    unsigned int checksum;
    int fd;
}

- (void)dealloc;
- (id)init;

@end
